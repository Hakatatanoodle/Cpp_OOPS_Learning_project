#include "utils.hpp"
#include "mage.hpp"

mage::mage(int h , int ap,int d,std::string name): Character(h,ap,d,"Mage")
{
    dodgedAttack = false;
}

void mage::onTurn()
{
    dodgedAttack = false;
    Character::onTurn();
    //healing chance and logic
    //set dodged attack to false if it is true 
    if(turnCount%5 == 0 )
    {
        if(utility::randomNumberGenerator()<=40)
        {
            health+=(int)(health*0.25);
        }
        else 
        {
            health-=(int)(health*0.25);//type casting to integer
            if(health < 0 ) health =0;
        }
    }

}

void mage::attack(Character& target)
{
    if(dodgedAttack ==true)
    {
        dodgedAttack = false;
        return ;
    }
    //check for critical hit every turn 
    if(utility::randomNumberGenerator()<=10)
    {
        int damage = attackPower*3;
        target.takeDamage(damage);
    }
    
    else
    {
        Character::attack(target);
    }
}

void mage::takeDamage(int damage)
{
    if(turnCount%3 == 0)
    {
        if(utility::randomNumberGenerator()<=40)
        {
            dodgedAttack = true;
        }
    }
    if(dodgedAttack == true)
    {
        return ;
    }
    else 
    {
        Character::takeDamage(damage);
    }

}