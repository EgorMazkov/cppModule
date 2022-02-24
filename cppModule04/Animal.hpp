#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

using namespace std;

class Animal
{
private:
    Animal(std::string sType);
	std::string type;
public:
    Animal();
    ~Animal();
    Animal(const Animal &A);
    Animal& operator=(const Animal &A);
    Animal(string sType);
    const string getType() const;
    void makeSound() const;
};

#endif