/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:38:26 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:44:39 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("AMateria default") { std::cout << "AMateria default constructor called" << std::endl; }

AMateria::AMateria(const std::string& type) : _type(type) { std::cout << "AMateria parametric constructor called" << std::endl; }

AMateria::AMateria(const AMateria& src) : _type("AMateria default")
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria() { std::cout << "AMateria destructor called" << std::endl << std::endl; }

AMateria&	AMateria::operator=(const AMateria& rhs)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	(void)rhs;
	return *this;
}

const std::string&	AMateria::getType() const { return (this->_type); }

void	AMateria::use(ICharacter& target)
{
	std::cout << "* uses " << this->_type << " on " << target.getName() << " *" << std::endl;
}
