#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <stdlib.h>
#include <iostream>

class Contact
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public:
        void SetFN();
        void SetLN();
        void SetNN();
        int SetPN();
        void SetDS();
        std::string getFN();
        std::string getLN();
        std::string getNN();
        std::string getPN();
        std::string getDS();
};

#endif
