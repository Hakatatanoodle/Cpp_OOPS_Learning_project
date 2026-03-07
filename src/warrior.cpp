#include "warrior.hpp"
#include "utils.hpp"
#include<iostream>
warrior::warrior(int h ,int ap , int d,std::string name):Character(h,ap,d,"Warrior")
{
    isBoostActive = false;

}

void warrior::onTurn()
{
    Character::onTurn();
    if(turnCount%5==0)
    {
        isBoostActive = true;
    }
    else isBoostActive = false;
}

void warrior::attack(Character& target)
{
    if(utility::randomNumberGenerator(1,100)<=30 && isBoostActive == true)
    {
        int damage = attackPower*2;
        target.takeDamage(damage); 
    }
    else 
    {
        Character::attack(target);
    }
}

void warrior::takeDamage(int damage)
{
    if(utility::randomNumberGenerator(1,100)<=30 && isBoostActive ==true)
    {
        int actualDamage = damage * 2;//critical damage
        Character::takeDamage(actualDamage);//if takeDamge for warrior then infinte loop
    }
    else 
    {
        Character::takeDamage(damage);
    }

}


void warrior::displayStats()
{
    std::cout << "Warrior stats:"<<std::endl;
    std::cout <<"Health: "<<warrior::getHealth()<<std::endl;
}