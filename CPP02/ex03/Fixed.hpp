/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:29:50 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/04 16:58:01 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:

		int					_fixedPoint;
		static const int	_fractionalBits = 8;

	public:

		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& src);

		~Fixed(void);

		Fixed&	operator=(const Fixed& rhs);
		Fixed	operator+(const Fixed& rhs) const;
		Fixed	operator-(const Fixed& rhs) const;
		Fixed	operator*(const Fixed& rhs) const;
		Fixed	operator/(const Fixed& rhs) const;

		bool	operator>(const Fixed& rhs) const;
		bool	operator<(const Fixed& rhs) const;
		bool	operator>=(const Fixed& rhs) const;
		bool	operator<=(const Fixed& rhs) const;
		bool	operator==(const Fixed& rhs) const;
		bool	operator!=(const Fixed& rhs) const;

		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed&			min(Fixed& n1, Fixed& n2);
		static Fixed&			max(Fixed& n1, Fixed& n2);
		static const Fixed&		min(const Fixed& n1, const Fixed& n2);
		static const Fixed&		max(const Fixed& n1, const Fixed& n2);

		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& rhs);

#endif
