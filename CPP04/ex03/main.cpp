/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:56:10 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:45:15 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	std::cout << std::endl;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	std::cout << std::endl;

	ICharacter* me = new Character("me");
	
	std::cout << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	//me->unequip(1);
	
	std::cout << std::endl;

	ICharacter* bob = new Character("bob");
	
	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	
	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;
	
	return 0;
}
