#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>


class ClapTrap
{
private:
    int EnergyPoints;
    int HitPoints;
    int AttackDamage;
    std::string Name;

public:
    ClapTrap();
    ~ClapTrap();
    int GetHP();
    int GetEP();
    int GetAD();
    std::string GetN();
    ClapTrap(std::string CName);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap& operator=(const ClapTrap& C);
};

#endif