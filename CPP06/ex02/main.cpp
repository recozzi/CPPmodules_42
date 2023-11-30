/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:11:39 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/30 11:47:34 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

int main(void)
{
	Base* base = generate();
	
	std::cout << std::endl;
	std::cout << "Identify from \033[1;37mpointer\033[0m: ";
	identify(base);
	std::cout << std::endl;
	std::cout << "Identify from \033[1;37mreference\033[0m: ";
	identify(*base);
	std::cout << std::endl;
	delete base;
	return 0;
}
