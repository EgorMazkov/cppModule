#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &C);
    ScavTrap(std::string CName);
    ScavTrap& operator=(const ScavTrap& C);
    void guardGate();
    void attack(const std::string &target);
};

#endif