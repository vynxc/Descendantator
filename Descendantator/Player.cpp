#include "Player.hpp"

std::array<Player, MAX_PLAYERS> buffer1, buffer2;
std::atomic<std::array<Player, MAX_PLAYERS>*> active_buffer{ &buffer1 };
std::atomic<size_t> player_count{ 0 };

void ResetPlayerBuffers()
{
    buffer1.fill(Player{});
    buffer2.fill(Player{});
    player_count.store(0);
}