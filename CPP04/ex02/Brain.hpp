/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:29:46 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:37:31 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
