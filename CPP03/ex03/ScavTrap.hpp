/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:43:38 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/04 11:57:23 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& src);
		
		~ScavTrap(void);

		ScavTrap&	operator=(const ScavTrap& rhs);
		
		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif
