#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name): brrname(name)
{
}

Zombie::~Zombie()
{
    std::cout << brrname << " is dead." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << brrname << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setZombie(std::string name)
{
    brrname = name;
}