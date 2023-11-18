/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:18:05 by recozzi           #+#    #+#             */
/*   Updated: 2023/10/30 17:32:27 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	private:

		std::string		_type;
	
	public:

		Weapon(std::string type);
		
		~Weapon(void);
		
		const std::string&	getType(void) const;
		void				setType(std::string type);
};

#endif
