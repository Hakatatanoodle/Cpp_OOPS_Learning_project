#ifndef GIANT_HPP
#define GIANT_HPP

#include "Character.hpp"

class giant : public Character 
{
    private : 
    bool isEarthquakeActive;

    public:
    giant(int h, int ap, int d,std::string name);
    
    void onTurn() override;
    void attack(Character& target) override;
    void takeDamage(int damage) override;
    void displayStats() override;

};

#endif