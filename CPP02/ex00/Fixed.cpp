/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:06:55 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:27:28 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return *this;
}
