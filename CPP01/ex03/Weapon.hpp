/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:18:05 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:23:07 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
