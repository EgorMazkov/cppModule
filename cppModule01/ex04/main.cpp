#include <iostream>
#include "replace.hpp"
void error(int ac)
{
    if (ac == 1)
        std::cout << RED << "Error: not arguments <filename> <s1> <s2>" << std::endl;
    if (ac == 2)
        std::cout << RED << "Error: not arguments <s1> <s2>" << std::endl;
    if (ac == 3)
        std::cout << RED << "Error: not arguments <s2>" << std::endl;
    if (ac == 4)
        return ;
    if (ac > 4)
        std::cout << RED << "Error: many arguments" << std::endl;
    exit (1);
}
int main(int ac, char **av)
{
    error(ac);
    replace(av);
}
