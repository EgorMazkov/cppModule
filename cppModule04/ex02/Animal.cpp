#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor called! (Animal)" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor called! (Animal)" << std::endl;
}

Animal::Animal(const Animal &C):	type(C.type)
{
	std::cout << "Copy constructor called! (Animal)" << std::endl;
}

Animal& Animal::operator=(const Animal &C)
{
	if (this == &C)
		return (*this);
	type = C.type;
	return (*this);
}

Animal::Animal(std::string sType):	type(sType)
{
	std::cout << "Constructor with a name called! (Animal)" << std::endl;
}

const std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "And the lone silence answered..." << std::endl;
}
