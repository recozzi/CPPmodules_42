/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:01:52 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:31:29 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("default") { std::cout << "Animal default constructor called" << std::endl; }

Animal::Animal(const Animal& src) : _type("default")
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal() { std::cout << "Animal destructor called" << std::endl << std::endl; }

Animal&	Animal::operator=(const Animal& rhs)
{
	std::cout << "Animal assignation operator called" << std::endl;
	(void)rhs;
	return *this;
}

std::string	Animal::getType(void) const { return this->_type; }

void	Animal::makeSound() const { std::cout << "I don't know which Animal I am, what sound should I make?" << std::endl; }
