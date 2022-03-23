#include "Serialization.hpp"
#include <iostream>


uintptr_t serialize(Serialization *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Serialization* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Serialization *>(raw));
}

int	main()
{
	Serialization boba;
	std::cout <<	deserialize(serialize(&boba))->b << '\n' <<
					deserialize(serialize(&boba))->i << '\n' <<
					deserialize(serialize(&boba))->q << '\n' <<
					deserialize(serialize(&boba))->a << std::endl;
	std::cout <<	&boba << '\n' <<
					deserialize(serialize(&boba)) << std::endl;
	return (0);
}
