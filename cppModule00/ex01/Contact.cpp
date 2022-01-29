#include "Contact.hpp"

void    Contact::SetFN()
{
    std::cout << "Enter First Name" << std::endl;
    std::cin >> FirstName;
}


void    Contact::SetLN()
{
    std::cout << "Enter Last Name" << std::endl;
    std::cin >> LastName;
}

void    Contact::SetNN()
{
    std::cout << "Enter Nickname" << std::endl;
    std::cin >> Nickname;
}

void    Contact::SetPN()
{
    std::cout << "Enter Phone number" << std::endl;
    std::cin >> PhoneNumber;
}

void    Contact::SetDS()
{
    std::cout << "Enter Darkest Secret" << std::endl;
    std::cin >> DarkestSecret;
}

std::string    Contact::getFN()
{
    return(FirstName);
}
std::string    Contact::getLN()
{
    return(LastName);
}
std::string    Contact::getNN()
{
    return(Nickname);
}
std::string    Contact::getPN()
{
    return(PhoneNumber);
}
std::string    Contact::getDS()
{
    return(DarkestSecret);
}
