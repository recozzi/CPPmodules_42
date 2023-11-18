/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:16:16 by recozzi           #+#    #+#             */
/*   Updated: 2023/10/30 17:30:23 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) { }

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " has died" << std::endl;
}

void	Zombie::setZombie(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
