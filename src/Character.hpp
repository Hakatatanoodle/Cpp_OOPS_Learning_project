#ifndef CHARACTER_HPP//include guard to prevent files to be included multiple time
#define CHARACTER_HPP


class Character
{
    protected: 
    int health;
    int attackPower;
    int defense;
    int turn_count;

    //constructor  
    Character(int h , int ap, int d);

    public: 
    virtual void onTurn();
    virtual void attack(Character& target);
    virtual void takeDamage(int damage);
    virtual void displayStats();

};

#endif