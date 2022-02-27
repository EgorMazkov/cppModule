#include "ClapTrap.hpp"

int	main()
{
	ClapTrap A("Ildar");
	ClapTrap B("Anton");

	A.attack(B.GetN());
	B.takeDamage(A.GetAD());
	return (0);
}
