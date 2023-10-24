#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#pragma once
#include <tuple>

class GameEntity {
public:
    GameEntity(int x, int y, char type) : x(x), y(y), type(type) {}
    virtual ~GameEntity() {}  // Virtual destructor

    std::pair<int, int> getPos() const { return {x, y}; }
    char getType() const { return type; }
    void setPosition(int newX, int newY) { x = newX; y = newY; }
    void setType(char newType) { type = newType; }

private:
    int x, y;
    char type;
};
#endif // GAMEENTITY_H