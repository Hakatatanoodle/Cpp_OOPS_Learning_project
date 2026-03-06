#include "Character.hpp"
#include "warrior.hpp"
#include "giant.hpp"
#include "mage.hpp"
#include <iostream>

int main()
{
    int playerChoice,enemyChoice;
    Character* player = nullptr;

    std::cout<<"----------------------Welcome to Dune Wars!------------------ " <<std::endl;
    std::cout << "Choose which character to use for fight : " << std::endl;
    std::cout << "1. Warrior"<<std::endl << "2. Mage " << std::endl << "3. Giant "<<std::endl;

    std::cin >> playerChoice;

    switch(playerChoice)
    {
        case 1: 
        {
            player = new warrior(200,55,20,"Warrior");
            std::cout << "Warrior was choosen"<<std::endl;
            break;
        }
        case 2: 
        {
            player = new mage(120,75,10,"Mage");
            std::cout << "Mage was choosen"<<std::endl;
            break;
        }
        case 3: 
        {
            player = new giant(300,35,25,"Giant");
            std::cout << "Giant was choosen"<<std::endl;
            break;
        }
        default: std::cout << "No such Character!!"<<std::endl;

    }
    return 0;
}