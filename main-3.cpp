#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include "Game.h"

int main() {
    Game game;
    game.addEntity(std::make_shared<Ship>(5, 5));
    game.addEntity(std::make_shared<Mine>(7, 7));

    game.display();

    // Simulate a ship moving into the mine's position, causing an explosion.
    auto ship = game.getEntityAt(5, 5);
    if (ship) {
        ship->move(2, 2);  // Move the ship to (7, 7) where the mine is.
    }

    game.display();

    return 0;
}
