class Ship : public GameEntity {
public:
    Ship(int x, int y) : GameEntity(x, y, 'S') {}

    void move(int dx, int dy) {
        int x = std::get<0>(getPos());
        int y = std::get<1>(getPos());
        setPosition(x + dx, y + dy);
    }
};
