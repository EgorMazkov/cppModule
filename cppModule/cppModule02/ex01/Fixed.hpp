#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream>

class Fixed
{
private:
	int	num;
	static const int	staticNum = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &f);
	Fixed(const int n);
	Fixed(const float n);
	Fixed& operator=(const Fixed &f);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int	toInt( void ) const;
};
	
std::ostream& operator<<(std::ostream &out, const Fixed &f);


#endif