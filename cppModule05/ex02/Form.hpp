#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <iostream>
#include <exception>
#include <sstream>
#include "Bureaucrat.hpp"

// template <typename T>
// std::string to_string(T arg)
// {
//     std::stringstream ss;
//     ss << arg;
//     return ss.str();
// }

class Bureaucrat;

class Form
{
private:
    std::string name;
    bool checkSignature;
    int GradeRequiredToSign;
    int GradeRequiredToExecute;

public:
    Form();
    ~Form();
    Form(const Form &F);
    Form &operator=(const Form &F);
    Form(std::string name, int gradeRequiredToSign, int gradeRequiredToExecute);
    void beSigned(const Bureaucrat &B);
    std::string getName() const;
    bool getCheckSignature() const;
    int getGradeRequiredToSign() const;
    int getGradeRequiredToExecute() const;
    virtual void action() const = 0;
	void execute(Bureaucrat const & executor) const;

    struct GradeTooHighException : public std::exception
    {
        const int m_nGrade;
        GradeTooHighException(int grade) : m_nGrade(grade) {}
        virtual const char *what() const throw()
        {
            std::string a("GradeTooHighException: ");
            a += std::to_string(m_nGrade);
            return a.c_str();
        }
    };

    struct GradeTooLowException : public std::exception
    {
        const int m_nGrade;
        GradeTooLowException(int grade) : m_nGrade(grade) {}
        virtual const char *what() const throw()
        {
            std::string a("GradeTooLowException: ");
            a += std::to_string(m_nGrade);
            return a.c_str();
        }
    };

    struct FormIsNotSignedException : public std::exception
    {
        const int m_nGrade;
        FormIsNotSignedException(int grade) : m_nGrade(grade) {}
        virtual const char *what() const throw()
        {
            std::string a("FormIsNotSignedException: ");
            a += std::to_string(m_nGrade);
            return a.c_str();
        }
    };
};

std::ostream &operator<<(std::ostream &out, const Form &B);

#endif