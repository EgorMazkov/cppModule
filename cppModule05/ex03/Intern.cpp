#include "Intern.hpp"

int	Intern::HashIt(std::string level)
{
	int	num = level.length();
	int	sum = 0;

	for (int i = 0; i < num; ++i)
		sum += level[i];
	return (sum - 1000);
}

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &I)
{
	(void)&I;
}

Intern& Intern::operator=(const Intern &I)
{
	if (this == &I)
		return (*this);
	return (*this);
}

Form* Intern::makeForm(std::string formName, std::string target)
{
	int mName;
	std::pair<std::string, Form*> pairNameForm[] =
	{
		std::make_pair("ShrubberyCreationForm", new ShrubberyCreationForm(target)),
		std::make_pair("RobotomyRequestForm", new RobotomyRequestForm(target)),
		std::make_pair("PresidentialPardonForm", new PresidentialPardonForm(target))
	};

	for (int i = 0; i < 3; ++i)
	{
		if (formName == pairNameForm[i].first)
		{
			for (int j = i + 1; j < 3; ++j)
			{
				delete pairNameForm[j].second;
			}
			std::cout << "Intern creates " << formName << std::endl;
			return (pairNameForm[i].second);
		}
		delete pairNameForm[i].second;
	}
	mName = HashIt(formName);
	throw WrongFormNameException(mName);
	// throw WrongFormNameException(formName);
	return (NULL);
}
