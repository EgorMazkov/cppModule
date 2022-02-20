#include "HumanA.hpp"

HumanA::HumanA(std::string hName, Weapon &weapon): aName(hName), aWeapon(weapon)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
    std::cout << aName << " attack with is " << aWeapon.getType() << std::endl;
}
