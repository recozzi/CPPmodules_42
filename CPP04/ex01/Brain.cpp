/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:29:49 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/10 14:30:08 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { std::cout << "Brain default constructor called" << std::endl; }

Brain::Brain(const Brain& src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain() { std::cout << "Brain destructor called" << std::endl; }

Brain&	Brain::operator=(const Brain& rhs)
{
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

std::string	Brain::getIdeas(int i) const { return this->_ideas[i]; }

void	Brain::setIdeas(std::string ideas, int i) { this->_ideas[i] = ideas; }
