/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:17:35 by recozzi           #+#    #+#             */
/*   Updated: 2023/10/30 17:31:39 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
	this->_name = name;
}

HumanA::~HumanA(void) { }

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
