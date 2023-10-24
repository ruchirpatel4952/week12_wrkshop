#pragma once
#include "Explosion.h"

#include "GameEntity.h"

class Mine : public GameEntity {
    bool exploded = false;
public:
    // Constructor
    Mine(int x, int y) : GameEntity(x, y, 'M') {}

    // Explode method
    Explosion explode() {
        exploded = true;
        return Explosion(getX(), getY());
    }
    std::string getType() const  {
        return exploded ? "X" : "M";
    }
};

