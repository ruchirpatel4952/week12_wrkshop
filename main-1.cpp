#include <iostream>
#include "GameEntity.h"  // Assuming the above classes are in separate header files
#include "Effect.h"
#include "Utils.h"

int main() {
    srand(time(0));  // Seed for random number generation

    auto pos1 = Utils::generateRandomPos(100, 100);
    auto pos2 = Utils::generateRandomPos(100, 100);

    std::cout << "Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";

    double distance = Utils::calculateDistance(pos1, pos2);
    std::cout << "Distance between positions: " << distance << "\n";

    return 0;
}
