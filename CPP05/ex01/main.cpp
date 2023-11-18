/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:43:45 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 15:13:56 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	bob("Bob", 20);
	std::cout << std::endl;
	
	Form		form1("Cybersecurity Analyst", -25, 30);
	std::cout << std::endl;
	
	bob.signForm(form1);
	std::cout << std::endl;
	std::cout << form1 << std::endl;

	return 0;
}
