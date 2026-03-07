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
    Character* attacker = nullptr;//temporary roles that swap every turn 
    Character* defender = nullptr;
    Character* temp = nullptr;//a temporary character pointer to swap attacker and defender 
    bool gameEnd = false;//flag to check if the game is ended

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
    //logic to choose who attacks first
    int coinToss=utility::randomNumberGenerator(1,2);
    std::cout << "The coin is being flipped ...\nAnd the winner is ..."<<std::endl;
    if(coinToss == 1)
    {
        std::cout << "The player , Player gets to attack first !"<<std::endl;
        attacker = player;
        defender = enemy;

    } 
    if(coinToss == 2)
    {
        std::cout << "The Oppositon , Opposition gets to attack first !"<<std::endl;
        attacker = enemy;
        defender = player;
    } 


    //battle loop


    while(true)
    {
        attacker->onTurn();
        attacker->displayStats();
        defender->displayStats();
        std::cout << attacker->getName()<<" Turn !"<<std::endl;

        attacker->attack(*defender);
        std::cout << attacker->getName() << " attacked " <<  defender->getName()<<std::endl;
        if(defender->getHealth() <=0)
        {
            //gameEnd = true;
            std::cout << defender->getName() << " is Dead " << attacker->getName() << " Wins the match!"<<std::endl;
            break;
        }
        //swap attacker and defender 
        temp = attacker;
        attacker = defender ;
        defender = temp;
    }


    return 0;
}