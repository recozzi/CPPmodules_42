/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:02:14 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 12:13:30 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	
	std::cout << std::endl;
	
	if (argc == 1)
	{
		Phonebook	phonebook;
		std::string	input;

		while (input.compare("EXIT"))
		{
			std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
			std::getline(std::cin, input);
			if (input.compare("ADD") == 0)
				phonebook.addContact();
			else if (input.compare("SEARCH") == 0)
				phonebook.searchContact();
			if (std::cin.eof())
			{
				std::cout << std::endl;
				return 0;
			}
			if (input.compare("ADD") && input.compare("SEARCH") && input.compare("EXIT"))
			{
				if (input.compare("") == 0)
					std::cout << "Field can't be empty" << std::endl;
				else
					std::cout << "Invalid command" << std::endl;
			}
		}
	}
	else
		std::cout << "Too many arguments: just run ./phoneBook" << std::endl;
	
	std::cout << std::endl;
	
	return 0;
}
