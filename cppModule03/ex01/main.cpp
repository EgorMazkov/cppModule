#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap A("BIBA");
	ScavTrap B("BOBA");

	B.guardGate();
	B.attack(A.GetN());
	A.takeDamage(B.GetAD());
	A.beRepaired(100);
	return (0);
}
