/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:45:16 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 15:37:35 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << std::endl;
	
	std::cout << "\033[1;37mMEMORY ADDRESS:\033[0m" << std::endl;
	std::cout << "string:    " << &str << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "\033[1;37mVALUE:\033[0m" << std::endl;
	std::cout << "string:    " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
	
	std::cout << std::endl;
	
	return 0;
}
