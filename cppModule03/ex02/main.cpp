#include "FragTrap.hpp"

int	main()
{
	ClapTrap A("first");
	ScavTrap B("second");
	FragTrap C("third");

	B.guardGate();
	B.attack(A.GetN());
	A.takeDamage(B.GetAD());
	A.beRepaired(100);
	C.hingFixesGuys();
	return (0);
}
