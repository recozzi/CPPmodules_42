/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:51:50 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/10 17:39:31 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class	AAnimal
{
	protected:

		std::string	_type;

	public:

		AAnimal(void);
		AAnimal(const AAnimal& src);

		virtual ~AAnimal(void);

		AAnimal&	operator=(const AAnimal& rhs);

		std::string		getType(void) const;
		virtual	void	makeSound(void) const = 0;
};

#endif
