#pragma once
#include <array>
#include "SDK/Engine_classes.hpp"

struct Player {
    SDK::FVector2D TopLeft;
    SDK::FVector2D BottomRight;
    SDK::FVector2D Health;
    SDK::FVector Rotation;
};

constexpr size_t MAX_PLAYERS = 100;
extern std::array<Player, MAX_PLAYERS> buffer1, buffer2;
extern std::atomic<std::array<Player, MAX_PLAYERS>*> active_buffer;
extern std::atomic<size_t> player_count;

void ResetPlayerBuffers();