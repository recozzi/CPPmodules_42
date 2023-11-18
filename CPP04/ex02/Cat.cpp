/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:02:39 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/10 15:51:18 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	try {
		this->_brain = new Brain();
	} catch (const std::bad_alloc& err) {
		std::cerr << "Caught bad_alloc exception: " << err.what() << std::endl;
		this->_brain = NULL;
	}
}

Cat::Cat(const Cat& src) : AAnimal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = "Cat";
	try {
		this->_brain = new Brain();
	} catch (const std::bad_alloc& err) {
		std::cerr << "Caught bad_alloc exception: " << err.what() << std::endl;
		this->_brain = NULL;
	}
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs)
		*this->_brain = *rhs._brain;
	return *this;
}

void	Cat::makeSound() const { std::cout << "I am a Cat... Meow!" << std::endl; }
