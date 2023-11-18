/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:24:46 by recozzi           #+#    #+#             */
/*   Updated: 2023/10/27 17:30:24 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	zombie;

	try {
		zombie = new Zombie[N];
	} catch (const std::bad_alloc& err) {
		std::cerr << "Caught bad_alloc exception: " << err.what() << std::endl;
		zombie = NULL;
	}
	for (int i = 0; i < N; i++)
		zombie[i].setZombie(name);
	return zombie;
}
