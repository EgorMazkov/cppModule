#include "HumanB.hpp"

HumanB::HumanB(std::string hname): bName(hname), aWeapon(NULL)
{

}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon &weapon)
{
    aWeapon = &weapon;
}

void HumanB::attack()
{
    std::cout << bName << " attack with is " << aWeapon->getType() << std::endl;
}