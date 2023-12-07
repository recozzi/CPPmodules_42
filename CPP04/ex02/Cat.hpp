/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:48:29 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:37:39 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal
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
