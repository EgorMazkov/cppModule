#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
    std::string Name;
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap &C);
	DiamondTrap& operator=(const DiamondTrap& C);
	DiamondTrap(std::string sName);
};

#endif