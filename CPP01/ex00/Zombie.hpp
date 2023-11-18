/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:15:17 by recozzi           #+#    #+#             */
/*   Updated: 2023/10/30 17:29:53 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

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

#endif
