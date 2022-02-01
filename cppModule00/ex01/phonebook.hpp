#include <string>
#include <stdlib.h>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        int num;
        int nummax;
		Contact Cont[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void PrintIndex();
        void Command();
        void Add();
        void Search();
};
