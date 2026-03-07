#include "Character.hpp"
#include "warrior.hpp"
#include "giant.hpp"
#include "mage.hpp"
#include "utils.hpp"
#include <iostream>

int main()
{
    int playerChoice,enemyChoice;
    Character* player = nullptr;
    Character* enemy = nullptr;

    std::cout<<"----------------------Welcome to Dune Wars!------------------ " <<std::endl;
    std::cout << "Choose which character to use for fight : " << std::endl;
    std::cout << "1. Warrior"<<std::endl << "2. Mage " << std::endl << "3. Giant "<<std::endl;

    std::cin >> playerChoice;

    switch(playerChoice)
    {
        case 1: 
        {
            player = new warrior(200,55,20,"Warrior");
            std::cout << "Warrior was choosen by player"<<std::endl;
            break;
        }
        case 2: 
        {
            player = new mage(120,75,10,"Mage");
            std::cout << "Mage was choosen by player"<<std::endl;
            break;
        }
        case 3: 
        {
            player = new giant(300,35,25,"Giant");
            std::cout << "Giant was choosen by player"<<std::endl;
            break;
        }
        default: std::cout << "INVALID INPUT \nNo such Character!!"<<std::endl;break;
    }
    if(player==nullptr)
    {
        std::cout<<"Exiting game!"<<std::endl;
        return 0;
    }

    enemyChoice = utility::randomNumberGenerator(1,3);
    switch(enemyChoice)
    {
        case 1: 
        {
            enemy= new warrior(200,55,20,"Warrior");
            std::cout << "Warrior was choosen by enemy"<<std::endl;
            break;
        }
        case 2: 
        {
            enemy= new mage(120,75,10,"Mage");
            std::cout << "Mage was choosen by enemy"<<std::endl;
            break;
        }
        case 3: 
        {
            enemy= new giant(300,35,25,"Giant");
            std::cout << "Giant was choosen by enemy"<<std::endl;
            break;
        }
        default: std::cout << "INVALID INPUT\nNo such Character!!"<<std::endl;break;
    }
    return 0;
}