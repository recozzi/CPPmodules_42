/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:35:52 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:30:59 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog& src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog() { std::cout << "Dog destructor called" << std::endl; }

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog assignation operator called" << std::endl;
	(void)rhs;
	return *this;
}

void	Dog::makeSound() const { std::cout << "I am a Dog... Woof!" << std::endl; }
