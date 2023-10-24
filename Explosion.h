class Explosion : public GameEntity, public Effect {
public:
    Explosion(int x, int y) : GameEntity(x, y, 'E') {}

    void apply(GameEntity& entity) override {
        entity.setPosition(-1, -1);
        entity.setType('X');
    }
};
