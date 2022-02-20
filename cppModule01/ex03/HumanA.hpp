#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
    HumanA();
    std::string aName;
    Weapon &aWeapon;
public:
    HumanA(std::string hName, Weapon &weapon);
    ~HumanA();
    void attack();
};


#endif