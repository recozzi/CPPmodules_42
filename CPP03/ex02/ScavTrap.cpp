/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:50:46 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/04 16:08:28 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap parametric constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getHitPoints() == 0)
	{
		std::cout << "ScavTrap " << this->getName() << " is dead, cannot attack." << std::endl;
		return ;
	}
	if (this->getAttackDamage() > 0)
	{
		if (this->getEnergyPoints() == 0)
		{
			std::cout << "ScavTrap " << this->getName() << " has no energy points left to attack." << std::endl;
			return ;
		}
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage." << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " has no attack damage." << std::endl;
}

void	ScavTrap::guardGate(void) { std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode." << std::endl; }