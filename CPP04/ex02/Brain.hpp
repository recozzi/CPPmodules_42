/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:29:46 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/10 17:39:44 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	private:

		std::string	_ideas[100];

	public:

		Brain(void);
		Brain(const Brain& src);
		
		~Brain(void);

		Brain&	operator=(const Brain& rhs);

		std::string		getIdeas(int i) const;
		void			setIdeas(std::string ideas, int i);
};

#endif
