/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:15:17 by recozzi           #+#    #+#             */
/*   Updated: 2023/10/30 17:30:55 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

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

#endif
