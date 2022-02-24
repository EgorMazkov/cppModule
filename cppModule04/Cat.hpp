#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: virtual public Animal
{
private:

public:
    Cat();
    ~Cat();
    void Cat(const Cat &C):	Animal(C.type);
    void operator=(const Cat &C);
    void makeSound() const;
};

#endif