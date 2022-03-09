#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM
#include "Form.hpp"
class PresidentialPardonForm : public Form
{
private:
private:
	PresidentialPardonForm& operator=(const PresidentialPardonForm &P);
public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &P);
	PresidentialPardonForm(std::string target);
	virtual void action() const;
};


#endif