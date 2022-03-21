#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *m_Brain;
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &D);
	Dog& operator=(const Dog &D);
	virtual void makeSound() const;
	virtual void getBrainAddress() const;
};