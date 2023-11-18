/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:09:41 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:20:20 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat() { std::cout << "WrongCat destructor called" << std::endl; }

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	(void)rhs;
	return *this;
}

void	WrongCat::makeSound() const { std::cout << "I am a WrongCat... WrongMeow!" << std::endl; }