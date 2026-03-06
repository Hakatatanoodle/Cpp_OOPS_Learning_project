#ifndef MAGE_HPP
#define MAGE_HPP


#include "Character.hpp"

class mage: public Character
{
    private:
    bool dodgedAttack;

    public: 
    mage(int h , int ap, int d,std::string name);//mage consturctor while first calling character constructor 
    
    void onTurn() override;
    void attack(Character& target) override;
    void takeDamage(int damage) override;
    void displayStats() override;

};

#endif