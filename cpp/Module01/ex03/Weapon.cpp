#include "Weapon.hpp"

Weapon::Weapon(std::string stype):	type(stype)
{
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string stype)
{
	type = stype;
}

const std::string	&Weapon::getType()
{
	return (type);
}
