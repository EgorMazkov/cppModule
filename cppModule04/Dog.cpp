#include "Dog.hpp"

Dog::Dog():	Animal("Dog")
{
	cout << "Default constructor called! (Dog)" << endl;
}

Dog::~Dog()
{
	cout << "Destructor called! (Dog)" << endl;
}

Dog::Dog(const Dog &C):	Animal(C.type)
{
	cout << "Copy constructor called! (Dog)" << endl;
}

Dog& Dog::operator=(const Dog &C)
{
	if (this == &C)
		return (*this);
	type = C.type;
	return (*this);
}

void Dog::makeSound() const
{
	cout << "The Dog says: Meeeeeooow!" << endl;
}