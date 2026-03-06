
#include<iostream>
#include "Character.hpp"
#include<string>



Character::Character(int h,int ap,int d,std::string name)
{
    health = h;
    attackPower = ap;
    defense = d;
    turnCount  = 0;//at the starting the turn count is always zero
    this->name/*attribute*/= name;//parameter
}
void Character :: displayStats()
{
    std::cout << "Health: " << health <<std::endl;
    std::cout << "Attack Power: " << attackPower <<std::endl;
    std::cout << "Defense: " << defense <<std::endl;
}

void Character::onTurn()
{
    turnCount++;   
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

