#include "Zombie.hpp"

int main()
{
    Zombie anton("Anton");
    anton.accounce();

    Zombie *ildar = newZombie("Ildar");
    ildar->accounce();
    delete ildar;

    randomChump("Egor");
}