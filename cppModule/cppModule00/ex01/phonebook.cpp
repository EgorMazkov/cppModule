#include "phonebook.hpp"
#include <iomanip>
PhoneBook::PhoneBook(): num(0), nummax(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::Add()
{
	int flag = 0;
	if (num < 9)
	{
		num++;
		if (nummax != 8)
			nummax++;
	}
	else
		num = 1;
	Cont[num].SetFN();
	Cont[num].SetLN();
	Cont[num].SetNN();
	flag = Cont[num].SetPN();
	if (flag == 1)
	{
		std::cout << "These are not numbers" << std::endl;
		return ;
	}
	Cont[num].SetDS();
}

void	PhoneBook::Search()
{
	if (nummax == 0)
	{
		std::cout << "No contacts" << std::endl << std::endl;
		return ;
	}
	std::cout << "| " << "i"
			  << " |" << "FirstName"
			  << "  |" << "LastName"
			  << "   |" << "Nickname" << "   |" << std::endl;
	PhoneBook::PrintIndex();
}

void	PhoneBook::PrintIndex()
{
	int i;
	for (int j = 1; j <= nummax; j++)
	{
		std::cout << "|" << std::setw(3) << j;
		if (Cont[j].getFN().length() <= 10)
			std::cout << "|" << std::setw(11) << Cont[j].getFN() << "|";
		else
		{
			std::cout << "|";
			std::cout.write(Cont[j].getFN().c_str(), 9);
			std::cout << ".";
			std::cout << " |";
		}
		if (Cont[j].getLN().length() <= 10)
			std::cout << std::setw(11) << Cont[j].getLN() << "|";
		else
		{
			std::cout.write(Cont[j].getLN().c_str(), 9);
			std::cout << ".";
			std::cout << " |";
		}
		if (Cont[j].getNN().length() <= 10)
			std::cout << std::setw(11) << Cont[j].getNN() << "|";
		else
		{
			std::cout.write(Cont[j].getNN().c_str(), 9);
			std::cout << ".";
			std::cout << " |";
		}
		std::cout << std::endl;
	}
	std::cout << "Enter an index to display full information: " << std::endl;
	std::cin >> i;
	std::cin.clear();
	std::cout << nummax;
	if (i > nummax)
	{
		std::cout << "Sorry, index not found" << std::endl;
		return ;
	}
	else
		std::cout << "First Name: "<< Cont[i].getFN() << std::endl
				  << "Last Name: "<< Cont[i].getLN() << std::endl
				  << "Nickname: "<< Cont[i].getNN() << std::endl
				  << "Phone number: "<< Cont[i].getPN() << std::endl
				  << "Darkest Secret: "<< Cont[i].getDS() << std::endl
				  << std::endl;

}

void	PhoneBook::Command()
{
	std::string Cmd;

	// Add();
	// Add();
	// Add();
	// Add();
	// Add();
	// Add();
	// Add();
	// Add();
	while (1)
	{
		std::cout << "Enter a command(EXIT, ADD, SEARCH): " << std::endl;
		std::cin >> Cmd;
		if (Cmd == "EXIT")
			break ;
		else if (Cmd == "ADD")
			Add();
		else if (Cmd == "SEARCH")
			Search();
		Cmd = "";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
