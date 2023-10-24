#pragma once

#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect {
public:
    // Constructor
    Explosion(int x, int y) : GameEntity(x, y, 'E') {}

    // Apply effect on a GameEntity
    void apply(GameEntity& entity) override {
        // For simplicity, let's say the explosion sets the entity's position to (-1, -1) and type to 'X'
        entity.setPosition(-1, -1);
        entity.setType('X');
    }
};