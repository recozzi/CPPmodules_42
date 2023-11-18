/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:26:08 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:39:25 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") { std::cout << "Ice default constructor called" << std::endl; }

Ice::Ice(Ice const& src) : AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice(void) { std::cout << "Ice destructor called" << std::endl; }

Ice&	Ice::operator=(Ice const& rhs)
{
	std::cout << "Ice assignation operator called" << std::endl;
	(void)rhs;
	return *this;
}

AMateria*	Ice::clone() const
{
	AMateria*	newIce;

	try {
		newIce = new Ice(*this);
	} catch (std::bad_alloc& err) {
		std::cerr << "bad_alloc caught: " << err.what() << std::endl;
		return NULL;
	}
	return newIce;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
