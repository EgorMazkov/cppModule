#include "Bureaucrat.hpp"

int main(int ac, char **av)
{
    (void)av;
    if (ac > 1)
    {
        try
        {

        }
        catch(const std::exception& e)
        {
            cerr << e.what() << '\n';
        }
    }
    return (0);
}
