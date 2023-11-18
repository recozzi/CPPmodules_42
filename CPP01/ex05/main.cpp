/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:07:25 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 12:14:07 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl			harl;
	std::string		input;

	while (input.compare("EXIT"))
	{
		std::cout << std::endl;
		std::cout << "Enter level, choose between: DEBUG, INFO, WARNING and ERROR." << std::endl;
		std::cout << "Enter EXIT to quit." << std::endl;
		std::cout << std::endl;
		std::getline(std::cin, input);
		if(std::cin.eof() || input.compare("EXIT") == 0)
		{
			std::cout << std::endl;
			return 0;
		}
		harl.complain(input);
	}
	
	return 0;
}
