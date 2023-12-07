/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:06:55 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:27:45 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//========= CONSTRUCTOR =========//
Fixed::Fixed(void) : _fixedPoint(0) { }

Fixed::Fixed(const int value) : _fixedPoint(value << _fractionalBits) { }

Fixed::Fixed(const float value) : _fixedPoint(roundf(value * (1 << _fractionalBits))) { }

Fixed::Fixed(const Fixed& src) { *this = src; }

//========= DESTRUCTOR =========//
Fixed::~Fixed(void) { }

//========= OPERATOR OVERLOADS - ARITHMETIC OPERATORS =========//
Fixed&	Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(const Fixed& rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed& rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed& rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed& rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

//========= OPERATOR OVERLOADS - COMPARISON OPERATORS =========//
bool	Fixed::operator>(const Fixed& rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<(const Fixed& rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed& rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed& rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==(const Fixed& rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed& rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return true;
	return false;
}

//========= OPERATOR OVERLOADS - INCREMENT OPERATORS =========//
Fixed&	Fixed::operator++(void)
{
	++this->_fixedPoint;
	return *this;
}

Fixed&	Fixed::operator--(void)
{
	--this->_fixedPoint;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	float	n;	
	
	n = this->toFloat();
	this->_fixedPoint++;
	return Fixed(n);
}

Fixed	Fixed::operator--(int)
{
	float	n;	
	
	n = this->toFloat();
	this->_fixedPoint--;
	return Fixed(n);
}

//========= MEMBER FUNCTION OVERLOAD - STATIC FUNCTIONS =========//
Fixed&	Fixed::min(Fixed& n1, Fixed& n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return n1;
	return n2;
}

Fixed&	Fixed::max(Fixed& n1, Fixed& n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return n1;
	return n2;
}

const Fixed&	Fixed::min(const Fixed& n1, const Fixed& n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return n1;
	return n2;
}

const Fixed&	Fixed::max(const Fixed& n1, const Fixed& n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return n1;
	return n2;
}

//========= MEMBER FUNCTIONS =========//
void	Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

int	Fixed::getRawBits(void) const
{
	return this->_fixedPoint;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPoint / (float)(1 << _fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (this->_fixedPoint / (1 << _fractionalBits));
}

//========= OPERATOR OVERLOADS - NON-MEMBER FUNCTIONS =========//
std::ostream&	operator<<(std::ostream& out, const Fixed& rhs)
{
	out << rhs.toFloat();
	return out;
}
