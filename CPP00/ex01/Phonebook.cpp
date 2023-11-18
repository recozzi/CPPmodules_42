/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:59:23 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 11:47:17 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	_count = 0;
}

Phonebook::~Phonebook(void) { }

void	Phonebook::addContact(void)
{
	int			i;
	static int	newIndex;

	i = _count;
	if (_count > 7)
		i = newIndex;
	_contacts[i].setValue();
	if (_count <= 7)
		_count++;
	else
		if (++newIndex == _count)
			newIndex = 0;
}

void	Phonebook::searchContact(void) const
{
	std::string	input;
	int			index;
	
	index = 1;
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
   	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < _count; i++)
	{
		_contacts[i].printList(index);
		if (index > 7)
			index = 0;
		else
			index++;
	}
	std::cout << std::endl;
	std::cout << "Choose index: ";
	std::getline(std::cin, input);
	index = atoi(input.c_str());
	if (index > 0 && index <= _count)
		_contacts[index - 1].printContact();
	else if (std::cin.eof())
		return ;
	else
	{
		std::cout << std::endl;
		std::cout << "Invalid index: no such contact info" << std::endl;
		std::cout << std::endl;
	}
}
