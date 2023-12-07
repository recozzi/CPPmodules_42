/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:32:30 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:37:47 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal
{
	private:

		Brain*	_brain;

	public:

		Dog(void);
		Dog(const Dog& src);

		~Dog(void);

		Dog&	operator=(const Dog& rhs);

		virtual void	makeSound(void) const;
};
