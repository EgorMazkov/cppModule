#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << getZombie() << ": " << "is dead" << std::endl;
}

void Zombie::accounce()
{
    std::cout << getZombie() << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getZombie( void )
{
    return (name);
}