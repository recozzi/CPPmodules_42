/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:15:17 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:21:09 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	Zombie
{
	private:
		
		std::string		_name;

	public:
		
		Zombie(std::string name);
		
		~Zombie(void);

		void	announce(void);		
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);
