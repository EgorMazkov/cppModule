#ifndef DRAIN_HPP
#define DRAIN_HPP
#include <string>
#include <iostream>


class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
	~Brain();
	Brain(const Brain &B);
	Brain& operator=(const Brain &B);
};


#endif