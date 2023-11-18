/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:06:54 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/04 16:13:24 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hitPoints(0), _energyPoints(0), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap parametric constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{ 
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

std::string	ClapTrap::getName(void) const { return this->_name; }

unsigned int	ClapTrap::getHitPoints(void) const { return this->_hitPoints; }

unsigned int	ClapTrap::getEnergyPoints(void) const { return this->_energyPoints; }

unsigned int	ClapTrap::getAttackDamage(void) const { return this->_attackDamage; }

void	ClapTrap::setName(std::string name) { this->_name = name; }

void	ClapTrap::setHitPoints(unsigned int hitPoints) { this->_hitPoints = hitPoints; }

void	ClapTrap::setEnergyPoints(unsigned int energyPoints) { this->_energyPoints = energyPoints; }

void	ClapTrap::setAttackDamage(unsigned int attackDamage) { this->_attackDamage = attackDamage; }

void	ClapTrap::attack(const std::string& target)
{
	if (this->getHitPoints() == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " is dead, cannot attack." << std::endl;
		return ;
	}
	if (this->getAttackDamage() > 0)
	{
		if (this->getEnergyPoints() == 0)
		{
			std::cout << "ClapTrap " << this->getName() << " has no energy points left to attack." << std::endl;
			return ;
		}
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage." << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " has no attack damage." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoints() == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " is dead, cannot repair." << std::endl;
		return ;
	}
	if (amount > 0)
	{
		if (this->getEnergyPoints() == 0)
		{
			std::cout << "ClapTrap " << this->getName() << " has no energy points left to repair." << std::endl;
			return ;
		}
		std::cout << "ClapTrap " << this->getName() << " is repaired by " << amount << " points." << std::endl;
		this->setHitPoints(this->getHitPoints() + amount);
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " is not repaired." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " is dead, cannot take damage." << std::endl;
		return ;
	}
	if (amount > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage." << std::endl;
		if (this->getHitPoints() <= amount)
		{
			std::cout << "... And dies... " << "RIP ClapTrap " << this->getName() << "." << std::endl;
			this->setHitPoints(0);
			return ;
		}
		this->setHitPoints(this->getHitPoints() - amount);
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " takes no damage." << std::endl;
}
