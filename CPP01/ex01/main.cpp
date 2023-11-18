/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:17:26 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 15:34:21 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie*		Horde;
	int			N = 20;

	std::cout << std::endl;
	std::cout << "\033[1;37mCreating a horde of " << N << " zombies:\033[0m" << std::endl;
	
	Horde = zombieHorde(N, "Billy");
	for (int i = 0; i < N; i++)
		Horde[i].announce();
	
	std::cout << std::endl;
	std::cout << "\033[1;37mDeleting the horde:\033[0m" << std::endl;
	
	delete[] Horde;
	
	std::cout << std::endl;
	
	return 0;
}
