#include<iostream>
#include "Character.hpp"

void Character :: displayStats()
{
    std::cout << "Health: " << health <<std::endl;
    std::cout << "Attack Power: " << attackPower <<std::endl;
    std::cout << "Defense: " << defense <<std::endl;

}