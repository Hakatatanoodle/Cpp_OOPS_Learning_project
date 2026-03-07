#include "giant.hpp"
#include "utils.hpp"
#include<iostream>

giant::giant(int h , int ap , int d,std::string name):Character(h,ap,d,"Giant")
{
    isEarthquakeActive = false;
}

void giant::onTurn()
{
    Character::onTurn();
    if(turnCount % 7 == 0 )
    {
        if(utility::randomNumberGenerator(1,100)<=50)
        {
            isEarthquakeActive = true;
        }
    }
    else 
    {
        isEarthquakeActive = false;
    }
}

void giant::attack(Character& target)
{
    if(isEarthquakeActive == true)
    {
        int damage = attackPower*3;//triple attackpower
        target.takeDamage(damage);
    }
    else
    {
        Character::attack(target);
    }
}


void giant::takeDamage(int damage)
{
    if(isEarthquakeActive == true)
    {
        int doubleDamage = damage*2;
        Character::takeDamage(doubleDamage);
    }
    else
    {
        Character::takeDamage(damage);
    }
}

void giant::displayStats()
{
    std::cout << "Giant stats"<<std::endl;
}