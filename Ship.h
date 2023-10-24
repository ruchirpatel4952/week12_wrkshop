#include "GameEntity.h"
#pragma once

class Ship : public GameEntity {
public:
    Ship(int x, int y) : GameEntity(x, y, 'S') {}
    void move(int dx, int dy) {
        int x = getPos().first;
        int y = getPos().second;
        setPosition(x + dx, y + dy);
    }
};
