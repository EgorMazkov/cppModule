#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	
public:
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &F);
	FragTrap& operator=(const FragTrap &F);
	FragTrap(std::string sName);
	void highFiveGuys(void);
};


