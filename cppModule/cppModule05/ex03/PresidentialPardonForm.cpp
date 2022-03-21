#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Default Presidential", 147, 137)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &A): Form(A.getName(), 25,  5)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &A)
{
    if (this == &A)
        return (*this);
    return(*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target , 25, 5)
{
}

void PresidentialPardonForm::action() const
{
    std::cout << getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}