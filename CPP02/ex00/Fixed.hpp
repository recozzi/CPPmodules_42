/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:29:50 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/02 17:11:28 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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

#endif
