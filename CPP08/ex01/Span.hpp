/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:34:03 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/18 11:13:03 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

class	Span
{
	private:

		unsigned int		_size;
		std::vector<int>	_container;
		Span(void);

	public:

		Span(unsigned int N);
		Span(const Span& src);

		~Span(void);

		Span& operator=(const Span& rhs);

		unsigned int				getSize(void) const;
		const std::vector<int>&		getContainer(void) const;

		void			addNumber(int nbr);
		void			addNumberCopies(unsigned int nCopies, int nbr);
		void			addNumberRange(int begin, int end);
		void			addNumberRandom(unsigned int nbr);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		class	FullContainerException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Container is full");
				}
		};

		class	NotEnoughNumbersException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Not enough numbers in container");
				}
		};
};

std::ostream&	operator<<(std::ostream& out, const Span& rhs);
