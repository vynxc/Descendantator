#include "EntityManager.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/M1_classes.hpp"
#include "GlobalContext.hpp"



void EntityManager::ResetPlayerBuffers()
{
	buffer1.fill(Entity{});
	buffer2.fill(Entity{});
	player_count.store(0);
}

void EntityManager::UpdatePlayerBuffer()
{
	auto* inactive_buffer = (active_buffer.load() == &buffer1) ? &buffer2 : &buffer1;
	size_t current_player_count = 0;

	if (!GlobalContext::CheckGlobals())
		return;

	static SDK::TArray<SDK::AActor*> Actors;
	SDK::UGameplayStatics::GetAllActorsOfClass(GlobalContext::World, SDK::AM1Character::StaticClass(), &Actors);

	// Iterate over all actors
	for (auto actor : Actors)
	{
		auto is_monster = false;

		if (actor->IsA(SDK::AM1Monster::StaticClass()))
		{
			is_monster = true;

		}
		else if (!actor->IsA(SDK::AM1Player::StaticClass()))
		{
			continue;
		}

		auto m1_actor = static_cast<SDK::AM1Character*>(actor);
		auto m1_actor_location = m1_actor->K2_GetActorLocation();
		auto m1_actor_rotation = m1_actor->K2_GetActorRotation();
		auto m1_actor_fname = m1_actor->GetDisplayName();
		auto stats = m1_actor->GetStatComponent();
		auto is_visible = GlobalContext::LocalPlayer->PlayerController->LineOfSightTo(m1_actor, SDK::FVector{0,0,0}, true);
		SDK::FVector2D screen_location;
		SDK::UGameplayStatics::ProjectWorldToScreen(GlobalContext::LocalPlayer->PlayerController, m1_actor_location, &screen_location,false);

		auto player = Entity{};
		player.Distance = m1_actor->GetDistanceTo(GlobalContext::LocalPlayer->PlayerController->Pawn);
		player.WorldLocation = m1_actor_location;
		player.ScreenLocation = screen_location;
		player.Stats = stats->ReplicatedStats;
		player.Rotation = m1_actor_rotation;
		player.IsMonster = is_monster;
		player.IsVisible = is_visible;

		(*inactive_buffer)[current_player_count++] = player;

	}


	player_count.store(current_player_count);
	active_buffer.store(inactive_buffer);
}

