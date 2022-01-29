#include "phonebook.hpp"

PhoneBook::PhoneBook(): num(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::Add()
{
	Cont[num].SetFN();
	Cont[num].SetLN();
	Cont[num].SetNN();
	Cont[num].SetPN();
	Cont[num].SetDS();
	if (num < 7)
		num++;
	else
		num = 0;
}

void	PhoneBook::Search()
{
	std::cout << " | " << "i" << " | "
			  << " | " << "FirstName" << " | "
			  << " | " << "LastName" << " | "
			  << " | " << "Nickname" << " | ";
	for (int i = -1; i < num; i++)
	{
		/*
		  i   FirstName   LastName   Nickname
		|   |           |          |          |
		|   |           |          |          |
		|   |           |          |          |
		|   |           |          |          |
		|   |           |          |          |
		|   |           |          |          |
		*/
		std::cout << " | " <<  i;
		std::cout << " |  | " << Cont[i].getFN();
		std::cout << "         |  | " << Cont[i].getLN();
		std::cout << Cont[i].getNN();
		std::cout << Cont[i].getPN();
		std::cout << Cont[i].getDS();
		std::cout << std::endl;
	}
}

void	PhoneBook::Command()
{
	std::string Cmd;

	while (!std::cin.eof())
	{
		std::cout << "Enter a command: " << std::endl;
		std::cout << "EXIT" << std::endl; // выход
		std::cout << "ADD" << std::endl; // добавление
		std::cout << "SEARCH" << std::endl; // поиск
		if (!std::getline(std::cin, Cmd) || Cmd == "EXIT")
			break ;
		else if (Cmd == "ADD")
			Add();
		else if (Cmd == "SEARCH")
			Search();
	}
}
