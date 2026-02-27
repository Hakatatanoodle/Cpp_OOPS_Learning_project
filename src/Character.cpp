
#include<iostream>
#include "Character.hpp"



Character::Character(int h,int ap,int d)
{
    health = h;
    attackPower = ap;
    defense = d;
    turn_count  = 0;//at the starting the turn count is always zero
};
void Character :: displayStats()
{
    std::cout << "Health: " << health <<std::endl;
    std::cout << "Attack Power: " << attackPower <<std::endl;
    std::cout << "Defense: " << defense <<std::endl;
}

