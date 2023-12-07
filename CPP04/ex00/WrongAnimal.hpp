/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:09:39 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:35:45 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	WrongAnimal
{
	protected:

		std::string	_type;

	public:

		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& src);

		virtual ~WrongAnimal(void);

		WrongAnimal&	operator=(const WrongAnimal& rhs);

		std::string		getType(void) const;
		void			makeSound(void) const;
};
