/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:26:38 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/30 11:18:35 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data		data;
	Data*		serializedData;
	uintptr_t	serializedPtr;

	data.str = "Hello World!";
	data.c = 'H';
	data.nbr = 42;
	data.f = 42.0f;
	data.d = 42.0;

	std::cout << std::endl;

	serializedPtr = Serializer::serialize(&data);
	std::cout << "\033[1;37mSerialized pointer\033[0m: " << serializedPtr << std::endl;
	std::cout << "string: " << data.str << std::endl;
	std::cout << "char: " << data.c << std::endl;
	std::cout << "int: " << data.nbr << std::endl;
	std::cout << "float: " << data.f << std::endl;
	std::cout << "double: " << data.d << std::endl;
	
	std::cout << std::endl;

	serializedData = Serializer::deserialize(serializedPtr);
	std::cout << "\033[1;37mDeserialized pointer\033[0m: " << serializedData << std::endl;
	std::cout << "string: " << serializedData->str << std::endl;
	std::cout << "char: " << serializedData->c << std::endl;
	std::cout << "int: " << serializedData->nbr << std::endl;
	std::cout << "float: " << serializedData->f << std::endl;
	std::cout << "double: " << serializedData->d << std::endl;

	std::cout << std::endl;

	return 0;
}