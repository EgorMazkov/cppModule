#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 50, 20)
{
	std::cout << "Default constructor called, RandomChump created! (FragTrap)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called, " << Name << " dissappeared! (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &Q) : ClapTrap(Q.HitPoints, Q.EnergyPoints, Q.AttackDamage, Q.Name)
{
	std::cout << "Copy constructor called! (FragTrap)" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &Q)
{
	if (this == &Q)
		return (*this);
	Name = Q.Name;
	HitPoints = Q.HitPoints;
	EnergyPoints = Q.EnergyPoints;
	AttackDamage = Q.AttackDamage;
	return (*this);
}

FragTrap::FragTrap(std::string CName) : ClapTrap(100, 50, 20, CName)
{
	std::cout << "Constructor with a name called, " << Name << " created! (FragTrap)" << std::endl;
}

void FragTrap::hingFixesGuys(void)
{
    std::cout << "enough guys!" << std::endl;
}