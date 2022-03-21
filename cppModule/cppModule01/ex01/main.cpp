#include "Zombie.hpp"

int main()
{
    int n = 10;
    Zombie  *horde = ZombieHorde(n, "zombie");
    for (int i = 0; i < n; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
    return (0);
}
