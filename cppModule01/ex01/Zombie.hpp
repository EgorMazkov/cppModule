#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string brrname;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void setZombie(std::string name);
    void announce(void);
};

Zombie*	ZombieHorde(int N, std::string name);
#endif

//BraiiiiiiinnnzzzZ