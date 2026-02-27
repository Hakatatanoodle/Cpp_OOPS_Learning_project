#ifndef GIANT_HPP
#define GIANT_HPP

#include "Character.hpp"

class giant : public Character 
{
    private : 
    bool isEarthquakeActive;

    public:
    giant(int h, int ap, int d) : Character(h,ap,d)//giant constructor
    {
        isEarthquakeActive = false;//initially no earthquake 
    };

};

#endif