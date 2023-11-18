/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:32:25 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/09 16:27:11 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

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

#endif
