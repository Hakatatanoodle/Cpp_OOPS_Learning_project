#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Character.hpp"

class warrior: public Character
{
    private:
    bool isBoostActive;

    public: 

    warrior(int h , int ap, int d);//warrior consturctor while first calling character constructor 

    void onTurn() override;
    void attack(Character& target) override;
    void takeDamage(int damage) override;
    void displayStats() override;


};

#endif