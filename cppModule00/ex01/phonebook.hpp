#include <string>
#include <stdlib.h>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        int num;
		Contact Cont[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void Command();
        void Add();
        void Search();
};
