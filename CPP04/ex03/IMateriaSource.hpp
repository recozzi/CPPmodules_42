/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:30:34 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/09 16:26:39 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>

class	AMateria;

class	IMateriaSource
{
	public:
		
		virtual ~IMateriaSource() { }
		
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(const std::string& type) = 0;
};

#endif
