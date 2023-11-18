/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:09:44 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 17:15:34 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:

		WrongCat(void);
		WrongCat(const WrongCat& src);

		~WrongCat(void);

		WrongCat&	operator=(const WrongCat& rhs);

		void		makeSound(void) const;
};

#endif
