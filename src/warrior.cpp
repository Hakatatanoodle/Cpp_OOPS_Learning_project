#include "warrior.hpp"

warrior::warrior(int h ,int ap , int d)
{
    h = health;
    ap = attackPower;
    d = defense;
}

void warrior::onTurn()
{
    Character::onTurn();
    if(turnCount%5==0)
    {
        isBoostActive = true;
    }
}