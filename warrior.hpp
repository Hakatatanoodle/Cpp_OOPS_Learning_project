#include "Character.hpp"

class warrior: public Character
{
    private:
    bool isBoostActive;

    public: 

    warrior(int h , int ap, int d) : Character(h,ap,d)//warrior consturctor while first calling character constructor 
    {
        isBoostActive = false;//initially no boost 
    };

};