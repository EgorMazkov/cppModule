#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap A("Biba");
	ScavTrap B("Boba");
	FragTrap C("Lupa");
	DiamondTrap D("Pupa");

	B.guardGate();
	B.attack(A.GetN());
	A.takeDamage(B.GetAD());
	A.beRepaired(A.GetEP());
	C.highFivesGuys();
	D.highFivesGuys();
	D.attack(C.GetN());
	C.takeDamage(D.GetAD());
	D.attack(B.GetN());
	B.takeDamage(D.GetAD());
	D.beRepaired(D.GetEP());
	return (0);
}
