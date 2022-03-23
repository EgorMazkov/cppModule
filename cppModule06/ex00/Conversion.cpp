#include "Conversion.hpp"

Conversion::Conversion(char *str): intNum(), charNum(), floatNum(), doubleNum()
{
    size_t end;
    if (!str)
        throw NotStr();
    std::string string = str;
    if (str[0] == '-' || std::isdigit(static_cast<unsigned char>(*str)))
    {
        intNum = std::stoi(str);
        if (intNum == 0)
        {
            charNumstr = ND;
            floatNum = std::stof(string, &end);
            doubleNum = std::stoi(string, &end);
        }
        if (intNum > 127 || intNum < 32)
            charNumstr = ND;
        else
            charNum = static_cast<unsigned char>(intNum);
        floatNum = std::stof(string, &end);
        doubleNum = std::stod(string, &end);
    }
    else if (string == "-inff" || string == "+inff" || string == "nanf" || string == "-inf" || string == "+inf" || string == "nan")
    {
        charNumstr = ND;
        intNumstr = ND;
        doubleNum = std::stod(string, &end - 1);
        floatNum = static_cast<float>(doubleNum);
    }
    else if (string.size() == 1 && !std::isdigit(static_cast<unsigned char>(*str)))
    {
        charNum = *str;
        intNum = static_cast<int>(charNum);
        floatNum = static_cast<float>(charNum);
        doubleNum = static_cast<double>(charNum);
    }
    else
        throw IncorrectValue();
}

Conversion::~Conversion()
{
}

Conversion& Conversion::operator=(const Conversion &B)
{
	if (this == &B)
		return (*this);
    intNum = B.intNum;
    charNum = B.charNum;
    doubleNum = B.doubleNum;
    floatNum = B.floatNum;
	return (*this);
}

void Conversion::printIntNum()
{
    if (intNumstr.length() != 0)
    {
        std::cout << "Int: " << intNumstr << std::endl;
        return ;
    }
    std::cout << "Int: " << intNum << std::endl;
}

void Conversion::printCharNum()
{
    if (charNum)
    {
        std::cout << "Char: '" << charNum << "'" << std::endl;
        return ;
    }
    std::cout << "Char: " << charNumstr << std::endl;
}

void Conversion::printFloatNum()
{
    if (floatNumstr.length() != 0)
    {
            std::cout << "Float: " << floatNumstr << std::endl;
        return ;
    }
    std::cout << "Float: " << std::setprecision(1) << std::fixed << floatNum << 'f' << std::endl;

}

void Conversion::printDoubleNum()
{
    if (doubleNumstr.length() != 0)
    {
        std::cout << "Double: " << doubleNumstr << std::endl;
        return ;
    }
    std::cout << "Double: " << std::setprecision(1) << std::fixed << doubleNum << std::endl;
}

const char* Conversion::NotStr::what() const throw()
{
	return ("Why are you geh?");
}
const char* Conversion::IncorrectValue::what() const throw()
{
	return ("Something was entered incorrectly");
}
