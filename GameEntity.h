class GameEntity {
private:
    std::tuple<int, int> position;
    char type;

public:
    GameEntity(int x, int y, char type) : position(x, y), type(type) {}
    virtual ~GameEntity() {}

    std::tuple<int, int> getPos() const {
        return position;
    }

    char getType() const {
        return type;
    }

    void setPosition(int x, int y) {
        position = std::make_tuple(x, y);
    }

    void setType(char newType) {
        type = newType;
    }
};
