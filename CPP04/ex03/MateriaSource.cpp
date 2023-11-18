/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:41:43 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:44:22 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_materias[i])
			delete _materias[i];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs)
{
	std::cout << "MateriaSource assignation operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materias[i])
				delete this->_materias[i];
			this->_materias[i] = rhs._materias[i]->clone();
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
			return this->_materias[i]->clone();
	}
	return 0;
}
