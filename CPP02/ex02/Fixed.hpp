/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:29:50 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:25:45 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class	Fixed
{
	private:

		int					_fixedPoint;
		static const int	_fractionalBits = 8;

	public:

		//CONSTRUCTOR
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& src);
		
		//DESTRUCTOR
		~Fixed(void);

		//OPERATOR OVERLOADS - ARITHMETIC OPERATORS
		Fixed&	operator=(const Fixed& rhs);
		Fixed	operator+(const Fixed& rhs) const;
		Fixed	operator-(const Fixed& rhs) const;
		Fixed	operator*(const Fixed& rhs) const;
		Fixed	operator/(const Fixed& rhs) const;

		//OPERATOR OVERLOADS - COMPARISON OPERATORS
		bool	operator>(const Fixed& rhs) const;
		bool	operator<(const Fixed& rhs) const;
		bool	operator>=(const Fixed& rhs) const;
		bool	operator<=(const Fixed& rhs) const;
		bool	operator==(const Fixed& rhs) const;
		bool	operator!=(const Fixed& rhs) const;

		//OPERATOR OVERLOADS - INCREMENT AND DECREMENT OPERATORS
		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		//MEMBER FUNCTION OVERLOAD - STATIC FUNCTIONS
		static Fixed&			min(Fixed& n1, Fixed& n2);
		static Fixed&			max(Fixed& n1, Fixed& n2);
		static const Fixed&		min(const Fixed& n1, const Fixed& n2);
		static const Fixed&		max(const Fixed& n1, const Fixed& n2);

		//MEMBER FUNCTIONS
		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

//OPERATOR OVERLOADS - NON-MEMBER FUNCTIONS
std::ostream&	operator<<(std::ostream& out, const Fixed& rhs);
