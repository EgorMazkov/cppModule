#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap A("Anton");
	ScavTrap B("Ildar");
	FragTrap C("Egor");

	B.guardGate();
	B.attack(A.GetN());
	A.takeDamage(B.GetAD());
	B.attack(A.GetN());
	A.takeDamage(B.GetAD());
	A.beRepaired(100);
	C.highFivesGuys();
	return (0);
}
