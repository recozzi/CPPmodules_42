/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:16:31 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:39:10 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const& src);
		~Ice(void);

		Ice&	operator=(Ice const& rhs);

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};
