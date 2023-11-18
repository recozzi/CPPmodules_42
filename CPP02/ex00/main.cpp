/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:04:47 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 12:39:26 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a; //Default constructor called
	Fixed c; //Default constructor called
	
	std::cout << std::endl;

	Fixed b( a ); //Copy constructor called

	std::cout << std::endl;

	c = b; //Assignation operator called
	std::cout << std::endl;

	//member function called
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << std::endl;

	return 0;
}
