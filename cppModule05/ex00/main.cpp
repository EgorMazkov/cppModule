
#include "Bureaucrat.hpp"

int main(int ac, char **av)
{
    (void)av;
    if (ac > 1)
    {
        try
        {
            Bureaucrat bur("my", atoi(av[1]));
            cout << bur << endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    return (0);
}
