
#include<iostream>
#include "Character.hpp"



Character::Character(int h,int ap,int d)
{
    health = h;
    attackPower = ap;
    defense = d;
    turn_count  = 0;//at the starting the turn count is always zero
}
void Character :: displayStats()
{
    std::cout << "Health: " << health <<std::endl;
    std::cout << "Attack Power: " << attackPower <<std::endl;
    std::cout << "Defense: " << defense <<std::endl;
}

void Character::onTurn()
{
    turn_count++;
}

void Character::takeDamage(int damage)
{
    int actualDamage = damage - defense;//more defense less damage , less defense more damage 
    if(actualDamage<0)
    {
        actualDamage = 0;
    }

    health -=actualDamage;
    if(health<0)
    {
        health = 0;//health cannot go below zero 
    }
}
void Character::attack(Character& target)
{
    int damage = attackPower;
    target.takeDamage(damage);
}

