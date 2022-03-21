#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <exception>

// template <typename T>
// std::string to_string(T arg){
// 	std::stringstream ss;
// 	ss << arg;
// 	return ss.str();
// }

static const std::string ND("Non displayable");
static const std::string IM("impossible");

class Conversion
{
private:
    int intNum;
    std::string intNumstr;
    char charNum;
    std::string charNumstr;
    float floatNum;
    std::string floatNumstr;
    double doubleNum;
    std::string doubleNumstr;
public:
    Conversion(char *str);
    ~Conversion();
    Conversion& operator=(const Conversion &B);
    void printIntNum();
    void printCharNum();
    void printFloatNum();
    void printDoubleNum();
    std::string HashIt(std::string level);

    class NotStr : std::exception
	{
        public:
		virtual const char* what() const throw();
	};
    class IncorrectValue : std::exception
    {
        public:
        virtual const char* what() const throw();
    };
};


#endif