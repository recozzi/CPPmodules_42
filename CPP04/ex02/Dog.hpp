/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:32:30 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 17:15:57 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
# define DOG_HPP

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

#endif
