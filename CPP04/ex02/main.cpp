/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:45:29 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:37:10 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	AAnimal*	array[4];

	for(int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << std::endl;
			try {
				array[i] = new Cat();
			} catch (const std::bad_alloc& err) {
				std::cerr << "Caught bad_alloc exception: " << err.what() << std::endl;
				array[i] = NULL;
			}
		}
		else
		{
			std::cout << std::endl;
			try {
				array[i] = new Dog();
			} catch (const std::bad_alloc& err) {
				std::cerr << "Caught bad_alloc exception: " << err.what() << std::endl;
				array[i] = NULL;
			}
		}
	}

	std::cout << std::endl;

	for(int i = 0; i < 4; i++)
		array[i]->makeSound();

	std::cout << std::endl;
	
	for (int i = 0; i < 4; i++)
		delete array[i];
	
	return 0;
}
