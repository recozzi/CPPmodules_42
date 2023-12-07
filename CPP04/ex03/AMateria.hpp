/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:26:08 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:38:34 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class	AMateria
{
	protected:

		std::string	_type;

	public:

		AMateria(void);
		AMateria(const std::string& type);
		AMateria(const AMateria& src);

		virtual ~AMateria(void);

		AMateria&	operator=(const AMateria& rhs);
		
		const std::string&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};
