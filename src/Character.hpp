#ifndef CHARACTER_HPP//include guard to prevent files to be included multiple time
#define CHARACTER_HPP

#include<string>

class Character
{
    protected: 
    int health;
    int attackPower;
    int defense;
    int turnCount;
    std::string name;

    //constructor  
    Character(int h , int ap, int d,std::string name);

    public: 
    virtual void onTurn();
    virtual void attack(Character& target);
    virtual void takeDamage(int damage);
    virtual void displayStats();

    //getter
    int getHealth();
    std::string getName();

};

#endif