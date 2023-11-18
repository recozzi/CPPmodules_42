/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:21:22 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 17:03:42 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	clapTrap("Bobby");

	std::cout << std::endl;

	clapTrap.setAttackDamage(3);
	clapTrap.attack("Super Mutant");
	clapTrap.takeDamage(7);
	clapTrap.beRepaired(1);
	clapTrap.takeDamage(7);
	
	std::cout << std::endl;

	return 0;
}
