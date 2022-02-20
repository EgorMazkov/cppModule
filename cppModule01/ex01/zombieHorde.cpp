#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name)
{
    Zombie  *Zombiebr;
    if (!(N > 1))
        return (NULL);
    Zombiebr = new Zombie[N];
    for (int i = 0; i < N; i++)
        Zombiebr[i].setZombie(name);
    return (Zombiebr);
}
