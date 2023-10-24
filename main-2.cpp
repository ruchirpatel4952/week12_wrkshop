#include <iostream>
#include "GameEntity.h"  // Assuming the above classes are in separate header files
#include "Effect.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

int main() {
    // Create a Ship object
    Ship ship(10, 10);
    std::cout << "Ship initial position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";

    // Move the ship
    ship.move(5, 5);
    std::cout << "Ship after move: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";

    // Create a Mine object
    Mine mine(20, 20);
    std::cout << "Mine initial position: (" << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << ")\n";

    // Explode the mine
    Explosion explosion = mine.explode();
    std::cout << "Mine after explosion: " << mine.getType() << "\n";

    // Apply explosion to ship
    explosion.apply(ship);
    std::cout << "Ship after explosion: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";

    return 0;
}
