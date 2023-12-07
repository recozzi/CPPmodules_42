/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:32:25 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:39:41 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		
		AMateria*	_materias[4];
	
	public:

		MateriaSource(void);
		MateriaSource(const MateriaSource& src);

		~MateriaSource(void);

		MateriaSource&	operator=(const MateriaSource& rhs);

		virtual void		learnMateria(AMateria* m);
		virtual AMateria*	createMateria(const std::string& type);
};
