#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    ~Zombie ( void );
    Zombie (std::string name);
    void accounce( void );
    std::string getZombie( void );
};
void    randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif

//BraiiiiiiinnnzzzZ