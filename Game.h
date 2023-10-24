#include <vector>
#include <cmath>
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"

class Game {
private:
    std::vector<GameEntity*> entities;

public:
    std::vector<GameEntity*> get_entities() const {
        return entities;
    }

    void set_entities(const std::vector<GameEntity*>& newEntities) {
        entities = newEntities;
    }

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        for (int i = 0; i < numShips; i++) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
        }

        for (int i = 0; i < numMines; i++) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
        }

        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        int iterations = 0;

        while (iterations < maxIterations) {
            for (auto entity : entities) {
                Ship* ship = dynamic_cast<Ship*>(entity);
                if (ship) {
                    ship->move(1, 0);
                }
            }

            for (auto entity1 : entities) {
                Ship* ship = dynamic_cast<Ship*>(entity1);
                if (ship) {
                    for (auto entity2 : entities) {
                        Mine* mine = dynamic_cast<Mine*>(entity2);
                        if (mine) {
                            double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());
                            if (distance <= mineDistanceThreshold) {
                                mine->explode();
                                ship->setType('X');  // Marking the ship as destroyed
                            }
                        }
                    }
                }
            }

            iterations++;
        }
    }
};
