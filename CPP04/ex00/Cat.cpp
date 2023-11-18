/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:02:39 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:19:17 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat& src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat() { std::cout << "Cat destructor called" << std::endl; }

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat assignation operator called" << std::endl;
	(void)rhs;
	return *this;
}

void	Cat::makeSound() const { std::cout << "I am a Cat... Meow!" << std::endl; }
