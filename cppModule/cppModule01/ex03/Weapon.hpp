#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon
{
private:
    std::string type;
    Weapon();
public:
    ~Weapon();
    Weapon(std::string stype);
    const std::string &getType();
    void setType(std::string type);
};

#endif