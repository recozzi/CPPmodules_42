/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:51:50 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:36:21 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
