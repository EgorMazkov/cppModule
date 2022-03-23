#include <iostream>
#include "iter.hpp"

void increment(char &a)
{
	++a;
}

void increment(int &a)
{
	++a;
}

void increment(float &a)
{
	++a;
}

void decrement(char &a)
{
	--a;
}

void decrement(int &a)
{
	--a;
}

void decrement(float &a)
{
	--a;
}

int	main()
{
	char a[] = {'b', 'i', 'b', 'a'};
	int b[] = {4, 2, 1, 3};
	float c[] = {3.14f, 1.234f};

	iter(a, 4, increment);
	iter(a, 4, decrement);
	iter(b, 4, increment);
	iter(b, 4, decrement);
	iter(c, 2, increment);
	iter(c, 2, decrement);
	return (0);
}
