#include "Conversion.hpp"

int main(int ac, char **av)
{
    if (ac > 1)
    {
        try
        {
            Conversion Conversion(av[1]);
            Conversion.printCharNum();
            Conversion.printIntNum();
            Conversion.printDoubleNum();
            Conversion.printFloatNum();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        catch(...)
        {
            std::cout << "Something was entered incorrectly(" << std::endl;
        }
    }
}
