/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:51:50 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 17:16:12 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected:

		std::string	_type;

	public:

		Animal(void);
		Animal(const Animal& src);

		virtual ~Animal(void);

		Animal&	operator=(const Animal& rhs);

		std::string		getType(void) const;
		virtual	void	makeSound(void) const;
};

#endif
