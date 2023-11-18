/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:35:52 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/10 15:51:23 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	try {
		this->_brain = new Brain();
	} catch (const std::bad_alloc& err) {
		std::cerr << "Caught bad_alloc exception: " << err.what() << std::endl;
		this->_brain = NULL;
	}
}

Dog::Dog(const Dog& src) : AAnimal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = "Dog";
	try {
		this->_brain = new Brain();
	} catch (const std::bad_alloc& err) {
		std::cerr << "Caught bad_alloc exception: " << err.what() << std::endl;
		this->_brain = NULL;
	}
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &rhs)
		*this->_brain = *rhs._brain;
	return *this;
}

void	Dog::makeSound() const { std::cout << "I am a Dog... Woof!" << std::endl; }
