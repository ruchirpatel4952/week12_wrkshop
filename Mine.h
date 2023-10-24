#include "GameEntity.h"

class Mine : public GameEntity {
public:
    Mine(int x, int y) : GameEntity(x, y, 'M') {}
    Explosion explode();  // Assuming Explosion is defined later
};
