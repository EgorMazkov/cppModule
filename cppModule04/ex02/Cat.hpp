#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *m_Brain;
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &C);
	Cat& operator=(const Cat &C);
	virtual void makeSound() const;
	virtual void getBrainAddress() const;
};

#endif