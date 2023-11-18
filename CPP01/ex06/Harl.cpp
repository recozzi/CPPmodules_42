/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:07:48 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 12:30:55 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) { }

Harl::~Harl(void) { }

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. " << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void 			(Harl::*function[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string		element[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int				flag = -1;
	int				i = 0;

	while (i < 4 && flag == -1)
	{
		flag = level == element[i] ? i : flag;
		i++;
	}
	i--;
	switch(flag)
	{
		case -1:
			std::cout << std::endl;
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			std::cout << std::endl;
			break ;
		default:
			while (flag < 4 && i < 4)
			{
				std::cout << std::endl;
				std::cout << "[ " << level << " ]" << std::endl;
				if (i != 3)
					level.assign(element[i + 1]);
				(this->*function[flag])();
				std::cout << std::endl;
				flag++;
				i++;
			}
	}
}
