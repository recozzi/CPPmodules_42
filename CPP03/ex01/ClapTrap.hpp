/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:54:36 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/03 21:46:04 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	protected:

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& src);
		
		~ClapTrap(void);

		ClapTrap&	operator=(const ClapTrap& rhs);
		
		std::string		getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;
		void			setName(std::string name);
		void			setHitPoints(unsigned int hitPoints);
		void			setEnergyPoints(unsigned int energyPoints);
		void			setAttackDamage(unsigned int attackDamage);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif
