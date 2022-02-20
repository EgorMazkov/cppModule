#include <string>
#include <iostream>

int main()
{
    std::string hiThisIs = "HI THIS IS BRAIN";
    std::string &stringREF = hiThisIs;
    std::string *stringPTR = &hiThisIs;
    std::cout << "hiThisIs : " << &hiThisIs << std::endl
              << "stringREF: " << &stringREF << std::endl
              << "stringPTR: " << stringPTR << std::endl
              << std::endl
              << "hiThisIs : " << hiThisIs << std::endl
              << "stringREF: " << stringREF << std::endl
              << "stringPTR: " << *stringPTR << std::endl;
}