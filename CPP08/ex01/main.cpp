/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:42:43 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/20 16:22:11 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(1000);
	
	try {
		sp.addNumberCopies(3, 500);
		sp.addNumber(6000);
		sp.addNumber(INT_MIN);
		sp.addNumber(INT_MAX);
		sp.addNumberRange(1, 15);
		sp.addNumberRandom(10);

		std::cout << std::endl;
		std::vector<int>::const_iterator i = sp.getContainer().begin();
		std::vector<int>::const_iterator j = sp.getContainer().end();
		for(; i != j; i++)
			std::cout << *i << std::endl;
		
		std::cout << std::endl;
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}