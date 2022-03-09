#include "Form.hpp"

Form::Form():	name(),
				checkSignature(false),
				GradeRequiredToSign(150),
				GradeRequiredToExecute(150)
{
}

Form::~Form()
{
}

Form::Form(const Form &F):	name(F.name),
							checkSignature(F.checkSignature),
							GradeRequiredToSign(F.GradeRequiredToSign),
							GradeRequiredToExecute(F.GradeRequiredToExecute)
{
}

Form& Form::operator=(const Form &F)
{
	if (this == &F)
		return (*this);
	checkSignature = F.checkSignature;
	return (*this);
}

Form::Form(	std::string name,
			int gradeRequiredToSign,
			int gradeRequiredToExecute):	name(name),
											checkSignature(false),
											GradeRequiredToSign(gradeRequiredToSign),
											GradeRequiredToExecute(gradeRequiredToExecute)
{
	if (gradeRequiredToSign < 1)
		throw GradeTooHighException(gradeRequiredToSign);
	else if (gradeRequiredToSign > 150)
		throw GradeTooLowException(gradeRequiredToSign);
	else if (gradeRequiredToExecute < 1)
		throw GradeTooHighException(gradeRequiredToExecute);
	else if (gradeRequiredToExecute > 150)
		throw GradeTooLowException(gradeRequiredToExecute);
}

void Form::beSigned(const Bureaucrat &B)
{
	if (B.getGrade() > GradeRequiredToSign)
		throw GradeTooLowException(B.getGrade());
	checkSignature = true;
}

std::string Form::getName() const
{
	return (name);
}

bool Form::getCheckSignature() const
{
	return (checkSignature);
}

int Form::getGradeRequiredToSign() const
{
	return (GradeRequiredToSign);
}

int Form::getGradeRequiredToExecute() const
{
	return (GradeRequiredToExecute);
}


std::ostream& operator<<(std::ostream &out, const Form &F)
{
	out <<	"Form: " <<
			F.getName() << ", " <<
			(F.getCheckSignature() ? ("is signed") : ("is not signed")) << ", " <<
			"with required grade to sign: " << F.getGradeRequiredToSign() << ", " <<
			"and required grade to execute: " << F.getGradeRequiredToExecute();
	return (out);
}
