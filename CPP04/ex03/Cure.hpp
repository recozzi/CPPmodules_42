/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:27:00 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:38:59 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		
		Cure(void);
		Cure(Cure const& src);
		~Cure(void);

		Cure&	operator=(Cure const& rhs);

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};
