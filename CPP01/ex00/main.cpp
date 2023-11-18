/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:24:49 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 15:37:04 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie*		zombie;

	std::cout << std::endl;
	std::cout << "\033[1;37m============== stackZombies ==============\033[0m" << std::endl;
	
	randomChump("Sully");
	
	std::cout << std::endl;
	std::cout << "\033[1;37m============== heapZombies ==============\033[0m" << std::endl;
	
	zombie = newZombie("Jim");
	zombie->announce();
	
	delete zombie;
	
	std::cout << std::endl;
	
	return 0;
}
