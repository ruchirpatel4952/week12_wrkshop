#pragma once

#include "GameEntity.h"

class Explosion;

class Mine : public GameEntity {
public:
    // Constructor
    Mine(int x, int y) : GameEntity(x, y, 'M') {}

    // Explode method
    Explosion explode() {
        return Explosion(getX(), getY());
    }
};

