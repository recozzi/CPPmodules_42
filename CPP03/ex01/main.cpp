/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:21:22 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 17:04:23 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	scavTrap("Witch-king of Angmar");

	std::cout << std::endl;

	scavTrap.attack("Gandalf");
	scavTrap.takeDamage(90);
	scavTrap.beRepaired(70);
	scavTrap.guardGate();

	std::cout << std::endl;
	
	return 0;
}
