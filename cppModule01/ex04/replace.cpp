#include "replace.hpp"

int replace(char **av)
{
    std::ifstream		inFile;
	std::ofstream		outFile;
	std::string			content;
	std::stringstream	sStream;
	std::size_t			match;
	std::string			nameOfOutfile;

    inFile.open(av[1]);
	if (inFile.good() == 0)
	{
		std::cout << "\nSorry, but there is no such document." << std::endl;
		return (1);
	}
	sStream << inFile.rdbuf();
	content = sStream.str();
	match = content.find(av[2]);
	while (match != std::string::npos)
	{
		content.erase(match, strlen(av[2]));
		content.insert(match, av[3]);
		match = content.find(av[2]);
	}
	nameOfOutfile = av[1];
	nameOfOutfile.append(".replace");
	outFile.open(nameOfOutfile);
	if (outFile.good() == 0)
	{
		std::cout << "Error with outfile" << '\n';
		return (1);
	}
    std::cout << RESET << "Done" << std::endl;
	outFile << content;
	inFile.close();
	outFile.close();
	return (0);
}