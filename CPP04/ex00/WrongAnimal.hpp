/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:09:39 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 17:15:30 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

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

#endif
