#include "Cat.hpp"

Cat::Cat():	Animal("Cat")
{
	cout << "Default constructor called! (Cat)" << endl;
}

Cat::~Cat()
{
	cout << "Destructor called! (Cat)" << endl;
}

Cat::Cat(const Cat &C):	Animal(C.type)
{
	cout << "Copy constructor called! (Cat)" << endl;
}

Cat& Cat::operator=(const Cat &C)
{
	if (this == &C)
		return (*this);
	type = C.type;
	return (*this);
}

void Cat::makeSound() const
{
	cout << "The Cat says: Meeeeeooow!" << endl;
}