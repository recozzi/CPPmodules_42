/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:43:45 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 15:14:04 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	bob("Bob", 1);
	std::cout << std::endl;
	
	Bureaucrat	jim("Jim", 365);
	std::cout << std::endl;
	
	Bureaucrat	joe("Joe", -92);
	std::cout << std::endl;

	std::cout << bob << std::endl;
	std::cout << jim << std::endl;
	std::cout << joe << std::endl;

	std::cout << "Incrementing Jim's grade by 100:";
	jim.incrementGrade(100);
	std::cout << jim << std::endl;
	std::cout << "Decrementing Jim's grade by 10: ";
	jim.decrementGrade(10);
	std::cout << jim << std::endl;

	return 0;
}
