/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:18:41 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:22:37 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
