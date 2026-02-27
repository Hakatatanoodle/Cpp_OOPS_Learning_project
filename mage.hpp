#include "Character.hpp"

class mage: public Character
{
    private:
    bool dodgedAttack;

    public: 

    mage(int h , int ap, int d) : Character(h,ap,d)//mage consturctor while first calling character constructor 
    {
        dodgedAttack = false;//initially no dodging attack 
    };

};