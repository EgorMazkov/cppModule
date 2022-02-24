#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog: virtual public Aminal
{
private:
    
public:
    Dog();
    ~Dog();
    void Dog(const Dog &C):	Animal(C.type);
    void operator=(const Dog &C);
    void makeSound() const;
};

#endif