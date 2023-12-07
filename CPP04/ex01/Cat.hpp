/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:48:29 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:36:51 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		
		Brain*	_brain;

	public:

		Cat(void);
		Cat(const Cat& src);

		~Cat(void);

		Cat&	operator=(const Cat& rhs);

		virtual void	makeSound(void) const;
};
