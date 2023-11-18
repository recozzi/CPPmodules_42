/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:06:55 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:06:57 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _fixedPoint(value << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _fixedPoint(roundf(value * (1 << _fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return this->_fixedPoint;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPoint / (float)(1 << _fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (this->_fixedPoint / (1 << _fractionalBits));
}

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& rhs)
{
	out << rhs.toFloat();
	return out;
}
