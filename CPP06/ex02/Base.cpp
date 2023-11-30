/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:53:55 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/30 11:31:56 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

Base::~Base(void) { }

Base*	generate(void)
{
	srand(time(NULL));
	int nbr = rand() % 3;
	switch (nbr)
	{
		case 0:
			return new A;
			break;
		case 1:
			return new B;
			break;
		case 2:
			return new C;
			break;
		default:
			std::cout << "Error: random number is not valid" << std::endl;
			return NULL;
			break;
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Error: pointer is not valid" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::exception& e)
			{
				std::cout << "Error: " << e.what() << std::endl;
			}
		}
	}
}