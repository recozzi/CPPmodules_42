/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:18:16 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:22:21 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class	HumanA
{
	private:

		std::string		_name;
		Weapon&			_weapon;
		
	public:

		HumanA(std::string name, Weapon& weapon);
		
		~HumanA(void);
		
		void	attack(void);
};
