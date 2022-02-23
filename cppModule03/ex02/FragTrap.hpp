#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:

public:
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap &Q);
    FragTrap& operator=(const FragTrap& Q);
    FragTrap(std::string CName);
    void hingFixesGuys(void);
};

#endif