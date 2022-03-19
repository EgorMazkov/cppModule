#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include <iostream>
#include <exception>
#include <sstream>
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

    struct WrongFormNameException
	{
	private:

	public:
		const std::string m_sMessage;
		WrongFormNameException(std::string const &message);
		~WrongFormNameException();
	};
};

#endif