#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP
#include <string>
#include <iostream>
#include <exception>
#include <sstream>
#include "Form.hpp"

using namespace std;

template <typename T>
std::string to_string(T arg){
	std::stringstream ss;
	ss << arg;
	return ss.str();
}

class Form;

class Bureaucrat
{
private:
    Bureaucrat();
    string Name;
    int grade;
public:
    ~Bureaucrat();
    string getName() const;
    int getGrade() const;
    void increment();
    void decrement();
    Bureaucrat(const Bureaucrat &B);
	Bureaucrat& operator=(const Bureaucrat &B);
    Bureaucrat(string name, int grade);
	bool signForm(Form &F);

	struct GradeTooHighException : public std::exception
	{
		const int m_nGrade;
		GradeTooHighException(int grade) : m_nGrade(grade){}
		virtual const char *what() const throw() {
			std::string a("GradeTooHighException: ");
			a += to_string(m_nGrade);
			return a.c_str();
		}
	};

	struct GradeTooLowException : public std::exception{
		const int m_nGrade;
		GradeTooLowException(int grade) : m_nGrade(grade){}
		virtual const char *what() const throw()
		{
			std::string a("GradeTooLowException: ");
			a += to_string(m_nGrade);
			return a.c_str();
		}
	};
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &B);
#endif
