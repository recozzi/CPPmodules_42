/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:21:22 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 17:05:34 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap fragTrap("Goblin");

	std::cout << std::endl;

	fragTrap.attack("Spiderman");
	fragTrap.takeDamage(80);
	fragTrap.beRepaired(10);
	fragTrap.highFivesGuys();

	std::cout << std::endl;
	
	return 0;
}
