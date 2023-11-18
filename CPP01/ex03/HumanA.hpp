/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:18:16 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 16:57:22 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMANA_HPP
# define HUMANA_HPP

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

#endif
