/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:21:22 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 17:06:16 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	diamondTrap("T-Rex");

	std::cout << std::endl;

	diamondTrap.attack("Ian Malcolm");
	diamondTrap.takeDamage(0);
	diamondTrap.beRepaired(0);
	diamondTrap.whoAmI();

	std::cout << std::endl;
	
	return 0;
}
