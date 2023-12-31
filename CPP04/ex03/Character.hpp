/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:37:17 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:38:45 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
	
		std::string		_name;
		AMateria*		_inventory[4];
		AMateria*		_drop[4];
	
	public:

		Character(void);
		Character(const std::string& name);
		Character(const Character& src);

		~Character(void);

		Character&	operator=(const Character& rhs);
		
		virtual const std::string&	getName() const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
};
