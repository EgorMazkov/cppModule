#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name(),
						   grade()
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &B) : Name(B.Name),
											  grade(B.grade)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &B)
{
	if (this == &B)
		return (*this);
	Name = B.Name;
	grade = B.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name),
													  grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException(grade);
	else if (grade > 150)
		throw GradeTooLowException(grade);
}

std::string Bureaucrat::getName() const
{
	return (Name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::increment()
{
	if (grade == 1)
		throw GradeTooHighException(grade);
	grade--;
}

void Bureaucrat::decrement()
{
	if (grade == 150)
		throw GradeTooHighException(grade);
	grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &B)
{
	out << B.getName() << ", bureaucrat grade:  " << B.getGrade();
	return (out);
}

bool Bureaucrat::signForm(Form &F)
{
	try
	{
		F.beSigned(*this);
		std::cout << Name << " signs " << F.getName() << '\n';
		std::cout << F << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (false);
}
