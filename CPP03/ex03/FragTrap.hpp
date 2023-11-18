/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:56:23 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/04 11:57:15 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
		
		~FragTrap(void);

		FragTrap&	operator=(const FragTrap& rhs);
		
		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif
