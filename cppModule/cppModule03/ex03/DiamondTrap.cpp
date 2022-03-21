#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():	ClapTrap(100, 50, 30, "Random_clap_name"),
							ScavTrap("Random"),
							FragTrap("Random"),
							Name("Random")
{
	std::cout << "Default constructor called, Random created!(DiamondTrap)" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called, " << Name << " vanished! (DiamondTrap)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &C):	ClapTrap(	C.HitPoints,
															C.EnergyPoints,
															C.AttackDamage,
															C.Name + "_clap_name"),
												ScavTrap(C.Name),
												FragTrap(C.Name),
												Name(C.Name)

{
	std::cout << "Copy constructor called! (DiamondTrap)" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &C)
{
    if (this == &C)
        return (*this);
    Name = C.Name;
    AttackDamage = C.AttackDamage;
    EnergyPoints = C.EnergyPoints;
    HitPoints = C.HitPoints;
    return (*this);
}

DiamondTrap::DiamondTrap(std::string sName):	ClapTrap(100, 50, 30, sName + "_clap_name"),
												ScavTrap(sName),
												FragTrap(sName),
												Name(sName)
{
	std::cout << "Constructor with a name called, " << Name << " created! (DiamondTrap)" << std::endl;
}
