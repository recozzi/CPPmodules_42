/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:44:13 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 14:30:38 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <ctime>
#include <cstdlib>

template <typename T>
class	Array
{
	private:

		T*				_array;
		unsigned int	_size;

	public:

		Array(void);
		Array(unsigned int n);
		Array(const Array& src);

		~Array(void);

		Array&	operator=(const Array& rhs);
		T&		operator[](int index) const;

		unsigned int	size(void) const;

		class OutOfBoundsException : public std::exception
		{
			public:

				virtual const char*	what(void) const throw()
				{
					return "Index out of bounds";
				}
		};

};

#include "Array.tpp"
