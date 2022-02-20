#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    HumanB();
    std::string bName;
    Weapon *aWeapon;
public:
    HumanB(std::string hName);
    ~HumanB();
    void setWeapon(Weapon &weapon);
    void attack();
};

#endif