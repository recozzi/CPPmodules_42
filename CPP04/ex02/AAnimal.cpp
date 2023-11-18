/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:01:52 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:37:45 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("default") { std::cout << "AAnimal default constructor called" << std::endl; }

AAnimal::AAnimal(const AAnimal& src) : _type("default")
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal() { std::cout << "AAnimal destructor called" << std::endl << std::endl; }

AAnimal&	AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << "AAnimal assignation operator called" << std::endl;
	(void)rhs;
	return *this;
}

std::string	AAnimal::getType(void) const { return this->_type; }
