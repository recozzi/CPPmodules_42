/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:07:53 by recozzi           #+#    #+#             */
/*   Updated: 2023/10/30 18:11:15 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl
{
	private:

		void 	debug(void);
		void 	info(void);
		void 	warning(void);
		void 	error(void);

	public:

		Harl(void);
		
		~Harl(void);

		void 	complain(std::string level);
};

#endif
