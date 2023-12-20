/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:27:55 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/18 11:15:45 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0) { }

Span::Span(unsigned int N) : _size(N) { }

Span::Span(const Span& src)
{
	*this = src;
}

Span::~Span(void) { }

Span&	Span::operator=(const Span& rhs)
{
	if (this != &rhs)
		_size = rhs._size;
	return *this;
}

unsigned int	Span::getSize(void) const
{
	return _size;
}

const std::vector<int>&	Span::getContainer(void) const
{
	return _container;
}

void	Span::addNumber(int nbr)
{
	if (_container.size() < _size)
		_container.push_back(nbr);
	else
		throw FullContainerException();
}

void	Span::addNumberCopies(unsigned int nCopies, int nbr)
{
	if (_container.size() + nCopies <= _size)
		_container.insert(_container.end(), nCopies, nbr);
	else
		throw FullContainerException();
}

void	Span::addNumberRange(int begin, int end)
{
	if (_container.size() < _size)
		for (; begin <= end; begin++)
			addNumber(begin);
}

void	Span::addNumberRandom(unsigned int nbr)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < nbr; i++)
		addNumber(rand());
}

static int	isOrdered(std::vector<int> container)
{
	std::vector<int>::iterator begin = container.begin();
	std::vector<int>::iterator end = container.end();
	
	for (; begin + 1 != end; begin++)
		if (*begin > *(begin + 1))
			return 0;
	return 1;
}

unsigned int	Span::shortestSpan()
{
	
	if (_container.size() < 2)
		throw NotEnoughNumbersException();
	if (!isOrdered(_container))
		std::sort(_container.begin(), _container.end());
	
	std::vector<int>::iterator start = _container.begin();
	std::vector<int>::iterator end = _container.end();
	
	int shortest = *(end - 1) - *start;
	for (; start + 1 != end; start++)
		if (*(start + 1) - *start < shortest)
			shortest = *(start + 1) - *start;
	return shortest;
}

unsigned int	Span::longestSpan()
{
	if (_container.size() < 2)
		throw NotEnoughNumbersException();
	if (!isOrdered(_container))
		std::sort(_container.begin(), _container.end());
	
	std::vector<int>::iterator start = _container.begin();
	std::vector<int>::iterator end = _container.end();
	
	int longest = *(end - 1) - *start;
	return longest;
}

std::ostream&	operator<<(std::ostream& out, const Span& rhs)
{
	const std::vector<int>& container = rhs.getContainer();
	std::vector<int>::const_iterator it = container.begin();
	std::vector<int>::const_iterator end = container.end();

	out << "Size: " << rhs.getSize() << std::endl;
	out << "Container: ";
	for (; it != end; it++)
	{
		out << *it;
		if (it + 1 != end)
			out << ", ";
	}
	out << std::endl;
	return out;
}
