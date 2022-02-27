#include "Fixed.hpp"

Fixed::Fixed() : num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) : num(f.num)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &f)
		return (*this);
	num = f.num;
	return (*this);
}

Fixed::Fixed(const int n) : num(0)
{
	if (!n)
		return;

	num |= ((n < 0) ? (1 << 31) : (0)) | (((n < 0) ? (n * -1) : (n)) << staticNum); //((n << (staticNum + 1)) >> 1);
}

Fixed::Fixed(const float n) : num(0)
{
	if (!n)
		return;

	num |= (((*(unsigned int *)&n >> 31) & 1) << 31) | ((((int)n < 0) ? ((int)n * -1) : ((int)n)) << staticNum);
	unsigned int rawBits = *(unsigned int *)&n;
	char exponent = ((rawBits << 1) >> 24) - 127;
	if (exponent >= (staticNum * -1) && exponent <= 22)
	{
		if (exponent > 0)
		{
			num |= ((rawBits << (9 + exponent)) >> (32 - staticNum));
		}
		else
		{
			num |= (1 << (staticNum + exponent)) | ((rawBits << 9) >> (32 - (staticNum + exponent)));
		}
	}
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (num);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	num = raw;
}

float Fixed::toFloat(void) const
{
	float sign = 1.0f;
	float integer = (*(unsigned int *)&num << 1) >> (staticNum + 1);
	float decimal = 0.0f;
	unsigned int tmp_dec = num & ~(0xFFFFFFFF << staticNum);
	int i = staticNum - 1;

	*((unsigned int *)&sign) |= ((num >> 31) & 1) << 31;
	for (; i >= 0; --i)
	{
		if (tmp_dec & (1 << i))
			break;
	}
	if (i < 0)
	{
		decimal = 0.0f;
	}
	else
	{
		tmp_dec ^= 1 << i;
		*((unsigned int *)&decimal) |= (((i - staticNum) + 127) << 23) | (tmp_dec << (23 - i));
	}
	return (sign * integer + sign * decimal);
}

int Fixed::toInt(void) const
{
	return (((*(unsigned int *)&num << 1) >> (staticNum + 1)) * (((num >> 31) & 1) ? (-1) : (1)));
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}
