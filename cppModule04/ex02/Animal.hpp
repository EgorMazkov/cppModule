#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
protected:
	Animal(std::string sType);
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &C);
	Animal& operator=(const Animal &C);
	const std::string getType() const;
	virtual void makeSound() const;
	virtual void getBrainAddress() const = 0;
};

#endif