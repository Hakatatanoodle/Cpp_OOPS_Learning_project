#include "Character.hpp"
#include "warrior.hpp"
#include "giant.hpp"
#include "mage.hpp"
#include <iostream>

int main()
{
    int playerChoice;

    std::cout<<"----------------------Welcome to Dune Wars!------------------ " <<std::endl;
    std::cout << "Choose which character to use for fight : " << std::endl;
    std::cout << "1. Warrior"<<std::endl << "2. Mage " << std::endl << "3. Giant "<<std::endl;

    std::cin >> playerChoice;
    return 0;
}