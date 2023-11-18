/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:45:29 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:21:39 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();

	std::cout << std::endl;

	const Animal* j = new Dog();

	std::cout << std::endl;

	const Animal* i = new Cat();

	std::cout << std::endl;
	
	const WrongAnimal* h = new WrongCat();
	
	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << h->getType() << " " << std::endl;
	
	std::cout << std::endl;

	meta->makeSound();
	j->makeSound();
	i->makeSound();
	h->makeSound();
	
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete h;

	return 0;
}
