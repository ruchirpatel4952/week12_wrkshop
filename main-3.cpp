#include <iostream>
#include "GameEntity.h"  // Assuming the above classes are in separate header files
#include "Effect.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include "Game.h"

int main() {
    Game game;

    // Initialize the game with 5 ships and 3 mines in a 100x100 grid
    game.initGame(5, 3, 100, 100);

    // Simulate the game for 10 iterations with a mine distance threshold of 5.0
    game.gameLoop(10, 5.0);

    // Print the final state of the entities
    for (auto entity : game.get_entities()) {
        std::cout << "Entity type: " << entity->getType() << ", Position: (" << std::get<0>(entity->getPos()) << ", " << std::get<1>(entity->getPos()) << ")\n";
    }

    return 0;
}
