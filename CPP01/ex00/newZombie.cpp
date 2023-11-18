/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:24:46 by recozzi           #+#    #+#             */
/*   Updated: 2023/10/27 17:30:45 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie*	zombie;

	try {
		zombie = new Zombie(name);
	} catch (const std::bad_alloc& err) {
		std::cerr << "Caught bad_alloc exception: " << err.what() << std::endl;
		zombie = NULL;
	}
	return zombie;
}
