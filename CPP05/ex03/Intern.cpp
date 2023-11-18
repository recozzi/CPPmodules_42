/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:29:17 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 15:38:40 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl << std::endl;
}

Intern::Intern(const Intern& src)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern&	Intern::operator=(const Intern& rhs)
{
	std::cout << "Intern assignation operator called" << std::endl;
	(void)rhs;
	return (*this);
}

static int	checkname(std::string name)
{
	std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (name.compare(forms[i]) == 0)
			return i;
	}
	return 42;
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	AForm*	form;
	int		i = checkname(name);
	
	if (i != 42)
	{
		try {
			switch (i)
			{
				case 0:
					form = new ShrubberyCreationForm(target);
					break;
				case 1:
					form = new RobotomyRequestForm(target);
					break;
				case 2:
					form = new PresidentialPardonForm(target);
					break;
			}
			std::cout << std::endl;
			std::cout << "Intern creates [" << form->getName() << "]" << std::endl;
			return form;
		}
		catch (std::bad_alloc& err) {
			std::cout << err.what() << std::endl;
		}
	}
	std::cout << "Intern cannot create form [" << name << "]" << std::endl;
	return NULL;
}