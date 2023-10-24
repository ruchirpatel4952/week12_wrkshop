class Effect {
public:
    virtual ~Effect() {}
    virtual void apply(GameEntity& entity) = 0;  // Pure virtual function
};
