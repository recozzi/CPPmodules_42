/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:15:17 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:21:53 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

class	Zombie
{
	private:
		
		std::string		_name;

	public:
		
		Zombie(void);
		
		~Zombie(void);

		void	setZombie(std::string name);
		void	announce(void);
};

Zombie*		zombieHorde(int N, std::string name);
