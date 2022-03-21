#include "Karen.hpp"

int	HashIt(std::string level)
{
	int	num = level.length();
	int	sum = 0;

	for (int i = 0; i < num; ++i)
		sum += level[i];
	return (sum + num);
}

int main(int ac, char **av)
{
    Karen k;
    int i = 0;
    if (ac == 1)
    {
        std::cout << "Error, sorry" << std::endl;
        return (0);
    }

    switch(HashIt(av[1]))
    {
		case 364:
            std::cout << "[ DEBUG ]" << std::endl;
            k.complain("DEBUG");
            std::cout << "\n";
		case 304:
            std::cout << "[ INFO ]" << std::endl;
            k.complain("INFO");
            std::cout << "\n";
		case 541:
            std::cout << "[ WARNING ]" << std::endl;
            k.complain("WARNING");
            std::cout << "\n";
		case 399:
            std::cout << "[ ERROR ]" << std::endl;
            k.complain("ERROR");
            std::cout << "\n";
            return (0);
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}