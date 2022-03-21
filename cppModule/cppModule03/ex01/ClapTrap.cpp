#include "ClapTrap.hpp"

using namespace std;

ClapTrap::ClapTrap() :  HitPoints(10),
                        EnergyPoints(10),
                        AttackDamage(0),
                        Name("Random")
{
    cout << "Dectructor called, Random created! (ClapTrap)" << endl;
}

ClapTrap::~ClapTrap()
{
    cout << "Desrtuctor called, " << Name << " vanished! (ClapTrap)" << endl;
}

ClapTrap::ClapTrap( int nHitPoints,
                    int nEnergyPoints,
                    int nAttackDamage,
                    std::string sName) : Name(sName),
                                        HitPoints(nHitPoints),
                                        EnergyPoints(nEnergyPoints),
                                        AttackDamage(nAttackDamage)
{
    std::cout << "Protected constructor called, " << Name << " created! (ClapTrap)" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &C)
{
    if (this == &C)
        return (*this);
    Name = C.Name;
    AttackDamage = C.AttackDamage;
    EnergyPoints = C.EnergyPoints;
    HitPoints = C.HitPoints;
    return (*this);
}

ClapTrap::ClapTrap(std::string CName) : Name(CName),
                                        HitPoints(10),
                                        EnergyPoints(10),
                                        AttackDamage(0)
{
    cout << "Constructor with a name called, " << Name << " created! (ClapTrap)" << endl;
}

int ClapTrap::GetAD()
{
    return (AttackDamage);
}

int ClapTrap::GetEP()
{
    return (EnergyPoints);
}

int ClapTrap::GetHP()
{
    return (HitPoints);
}

string ClapTrap::GetN()
{
    return (Name);
}

void ClapTrap::attack(const string &target)
{
    cout << "ClapTrap " << Name << " attact " << target << ", causing " << AttackDamage << " points of damage!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (EnergyPoints <= 0)
    {
        cout << Name << " has no energy!" << endl;
        return;
    }
    if (HitPoints <= 0)
    {
        cout << "ClapTrap " << Name << " dead((" << endl;
        return;
    }
    HitPoints -= amount;
    EnergyPoints--;
    if (HitPoints <= 0)
        cout << "ClapTrap " << Name << ",  takes damage " << amount << " and dies!" << endl;
    else
        cout << "ClapTrap " << Name << ",  takes damage " << amount << "!" << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (EnergyPoints <= 0)
    {
        cout << Name << " energy 0" << endl;
        return;
    }
    if (HitPoints <= 0)
    {
        cout << "ClapTrap " << Name << " dead((" << endl;
        return;
    }
    cout << "ClapTrap " << Name << "Repaired" << endl;
    EnergyPoints--;
    HitPoints += amount;
}