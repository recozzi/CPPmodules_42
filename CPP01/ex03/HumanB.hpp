/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:18:41 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 16:57:26 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:

		std::string		_name;
		Weapon*			_weapon;
		
	public:

		HumanB(std::string name);
		
		~HumanB(void);
		
		void	attack(void);
		void	setWeapon(Weapon& weapon);
};

#endif
