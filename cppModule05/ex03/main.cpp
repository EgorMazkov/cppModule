#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Intern intern;
        try
        {
            Bureaucrat bureaucrat("me", std::atoi(av[1]));
            Form *form = intern.makeForm("ShrubberyCreationForm", "home");
            std::cout << bureaucrat << '\n' << *form << '\n';
            bureaucrat.signForm(*form);
            bureaucrat.executeForm(*form);
            delete form;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            Bureaucrat bureaucrat("me", std::atoi(av[1]));
            Form *form = intern.makeForm("RobotomyRequestForm", "Anton");
            std::cout << bureaucrat << '\n' << *form << '\n';
            bureaucrat.signForm(*form);
            bureaucrat.executeForm(*form);
            delete form;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            Bureaucrat bureaucrat("me", std::atoi(av[1]));
            Form *form = intern.makeForm("PresidentialPardonForm", "Ildar");
            std::cout << bureaucrat << '\n' << *form << '\n';
            bureaucrat.signForm(*form);
            bureaucrat.executeForm(*form);
            delete form;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return (0);
}



