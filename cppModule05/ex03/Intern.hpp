#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:

public:
	Intern();
	~Intern();
	Intern(const Intern &I);
	Intern& operator=(const Intern &I);
	Form* makeForm(std::string formName, std::string target);
	int HashIt(std::string level);

	struct WrongFormNameException : public std::exception
	{
		const int m_nGrade;
		WrongFormNameException(int grade) : m_nGrade(grade){}
		virtual const char *what() const throw()
		{
			std::string a("WrongFormNameException: ");
			// switch (Intern::HashIt(m_nGrade))
			switch (m_nGrade)
			{
				case 1292:
				{
					a += to_string("ShrubberyCreationForm");
					break;
				}
				case 1008:
				{
					a += to_string("RobotomyRequestForm");
					break ;
				}
				case 1268:
				{
					a += to_string("PresidentialPardonForm");
					break;
				};
			}
			return a.c_str();
		}
	};
};


#endif