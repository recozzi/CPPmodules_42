/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:16:30 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/24 16:10:03 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Use: ./convert [string]" << std::endl;
		return 0;
	}

	std::cout << std::endl;

	ScalarConverter::convert(argv[1]);

	std::cout << std::endl;
	
	return 0;
}
