#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
	std::cout << "Default constructor called, RandomChump created! (ScavTrap)" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called, " << Name << " dissappeared! (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &C) : ClapTrap(C.HitPoints, C.EnergyPoints, C.AttackDamage, C.Name)
{
	std::cout << "Copy constructor called! (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(std::string CName) : ClapTrap(100, 50, 20, CName)
{
	std::cout << "Constructor with a name called, " << Name << " created! (ScavTrap)" << std::endl;
}

// ScavTrap &ScavTrap::operator=(const ScavTrap &C)
// {
// 	if (this == &C)
// 		return (*this);
// 	Name = C.Name;
// 	HitPoints = C.HitPoints;
// 	EnergyPoints = C.EnergyPoints;
// 	AttackDamage = C.AttackDamage;
// 	return (*this);
// }

void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << Name << " attack " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " have entered the Gate keeper mode!" << std::endl;
}