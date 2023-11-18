/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:27:47 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:39:17 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") { std::cout << "Cure default constructor called" << std::endl; }

Cure::Cure(Cure const& src) : AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure(void) { std::cout << "Cure destructor called" << std::endl; }

Cure&	Cure::operator=(Cure const& rhs)
{
	std::cout << "Cure assignation operator called" << std::endl;
	(void)rhs;
	return *this;
}

AMateria*	Cure::clone() const
{
	AMateria*	newCure;

	try {
		newCure = new Cure(*this);
	} catch (std::bad_alloc& err) {
		std::cerr << "bad_alloc caught: " << err.what() << std::endl;
		return NULL;
	}
	return newCure;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
