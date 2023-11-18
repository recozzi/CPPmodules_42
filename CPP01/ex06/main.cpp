/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:07:25 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 12:12:31 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << std::endl;
		std::cout << "Use: ./harlFilter [DEBUG/INFO/WARNING/ERROR]" << std::endl << std::endl;
		return 1;
	}

	Harl			harl;
	std::string		input(argv[1]);
	
	harl.complain(input);
	
	return 0;
}
