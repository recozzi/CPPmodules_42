/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:29:50 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:24:23 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Fixed
{
	private:

		int					_fixedPoint;
		static const int	_fractionalBits = 8;

	public:

		Fixed(void);
		Fixed(const Fixed& src);
		
		~Fixed(void);

		Fixed&	operator=(const Fixed& rhs);

		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
};
