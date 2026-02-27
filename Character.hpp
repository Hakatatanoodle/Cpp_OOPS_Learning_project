

class Character
{
    protected: 
    int health;
    int attack_power;
    int defense;
    int turn_count;

    //constructor  
    Character(int h , int ap, int d)
    {
        health = h;
        attack_power = ap;
        defense = d;
        turn_count  = 0;//at the starting the turn count is always zero 
    }

    public: 
    virtual void onTurn();
    virtual void attack();
    virtual void takeDamage();
    virtual void displayStats();

};