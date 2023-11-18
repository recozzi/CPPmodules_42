/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:48:29 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 17:15:52 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
# define CAT_HPP

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

#endif
