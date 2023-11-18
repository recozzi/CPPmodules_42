/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:03:24 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 11:46:16 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact(void) { }

Contact::~Contact(void) { }

static std::string	chooseField(int i)
{
	if (i == -1)
		return "index";
	else if (i == 0)
		return "first name";
	else if (i == 1)
		return "last name";
	else if (i == 2)
		return "nickname";
	else if (i == 3)
		return "phone number";
	else if (i == 4)
		return "darkest secret";
	return NULL;
}

static bool	 checkInput(std::string field, std::string input)
{
	int len = input.length();

	for (int i = 0; i < len; i++)
	{
		if (field.compare("first name") == 0 || field.compare("last name") == 0)
		{
			if (!isalpha(input[i]) && input[i] != 32)
				return false;
		}
		else if (field.compare("phone number") == 0)
		{
			if (!isdigit(input[i]) && input[i] != 43 && input[i] != 32)
				return false;
		}
		else if (field.compare("nickname") == 0 || field.compare("darkest secret") == 0)
			break ;
	}
	return true;
}

void	Contact::setContact(std::string field, std::string input)
{
	if (field.compare("first name") == 0)
		_firstName = input;
	else if (field.compare("last name") == 0)
		_lastName = input;
	else if (field.compare("nickname") == 0)
		_nickname = input;
	else if (field.compare("phone number") == 0)
		_phoneNumber = input;
	else if (field.compare("darkest secret") == 0)
		_darkestSecret = input;
}

void	Contact::setValue(void)
{
	std::string	input;
	std::string	field;

	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		field = chooseField(i);
		std::cout << "Enter " << field << ": ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (input.compare("") == 0)
		{
			std::cout << "Field can't be empty" << std::endl;
			i--;
		}
		else if (checkInput(field, input) == true)
			setContact(field, input);
		else
		{
			std::cout << "Invalid value" << std::endl;
			i--;
		}
	}
	std::cout << std::endl;
}

std::string	Contact::getValue(std::string field) const
{
	if (field.compare("first name") == 0)
		return _firstName;
	else if (field.compare("last name") == 0)
		return _lastName;
	else if (field.compare("nickname") == 0)
		return _nickname;
	else if (field.compare("phone number") == 0)
		return _phoneNumber;
	else if (field.compare("darkest secret") == 0)
		return _darkestSecret;
	return NULL;
}

void	Contact::printList(int index) const
{
	std::string	field;
	std::string value;

	for (int i = -1; i < 3; i++)
	{
		field = chooseField(i);
		std::cout << "|";
		std::cout.setf(std::ios::right);
		std::cout << std::setw(10);
		if (field == "index")
			std::cout << index;
		else
		{
			value = getValue(field);
			if (value.length() > 10)
				value = value.substr(0, 9) + ".";
			std::cout << value;
		}
	}
	std::cout << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void	Contact::printContact(void) const
{
	std::string	field;

	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		field = chooseField(i);
		std::cout << field << ": " << getValue(field) << std::endl;
	}
	std::cout << std::endl;
}
