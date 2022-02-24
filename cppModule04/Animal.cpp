#include "Animal.hpp"

Animal::Animal()
{
	cout << "Default constructor called! (Animal)" << endl;
}

Animal::~Animal()
{
	cout << "Destructor called! (Animal)" << endl;
}

Animal::Animal(const Animal &A):	type(A.type)
{
	cout << "Copy constructor called! (Animal)" << endl;
}

Animal& Animal::operator=(const Animal &A)
{
	if (this == &A)
		return (*this);
	type = A.type;
	return (*this);
}

Animal::Animal(string sType):	type(sType)
{
	cout << "Constructor with a name called! (Animal)" << endl;
}

const string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	cout << "And the lone silence answered..." << endl;
}
