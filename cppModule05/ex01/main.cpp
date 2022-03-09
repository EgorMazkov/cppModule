#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(int ac, char **av)
{
    (void)av;
    if (ac == 4)
    {
        try
        {
            Bureaucrat bureaucrat("me", std::atoi(av[1]));
			Form form("treaty", std::atoi(av[2]), std::atoi(av[3]));
			std::cout << bureaucrat << '\n';
			std::cout << form << '\n';
			while (bureaucrat.signForm(form))
			{
				bureaucrat.increment();
				std::cout << bureaucrat << '\n';
			}
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return (0);
}
