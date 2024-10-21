
#include <array>
#include <atomic>
#include "Entity.hpp"


namespace EntityManager
{
	constexpr size_t MAX_ENTITIES = 100;
	std::array<Entity, MAX_ENTITIES> buffer1, buffer2;
	std::atomic<std::array<Entity, MAX_ENTITIES>*> active_buffer;
	std::atomic<size_t> player_count;

	void ResetPlayerBuffers();

	void UpdatePlayerBuffer();
	
}