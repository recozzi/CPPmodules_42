/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:51:21 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:46:02 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Character default")
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		this->_drop[i] = NULL;
	}
}

Character::Character(const std::string& name) : _name(name)
{
	std::cout << "Character parametric constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		this->_drop[i] = NULL;
	}
}

Character::Character(const Character& src)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (this->_drop[i])
			delete this->_drop[i];
	}
}

Character&	Character::operator=(const Character& rhs)
{
	std::cout << "Character assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return *this;
}

const std::string&	Character::getName() const { return this->_name; }

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->_drop[idx] = this->_inventory[idx];
	this->_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
