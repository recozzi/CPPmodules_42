/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:09:35 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:20:13 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("default") { std::cout << "WrongAnimal default constructor called" << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal destructor called" << std::endl; }

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	(void)rhs;
	return *this;
}

std::string	WrongAnimal::getType(void) const { return this->_type; }

void	WrongAnimal::makeSound() const { std::cout << "I don't know which WrongAnimal I am, what sound should I make?" << std::endl; }