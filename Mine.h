class Mine : public GameEntity {
public:
    Mine(int x, int y) : GameEntity(x, y, 'M') {}

    Explosion explode() {
        setType('X');
        return Explosion(std::get<0>(getPos()), std::get<1>(getPos()));
    }
};
