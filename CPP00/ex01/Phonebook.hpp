/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:03:29 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 09:14:58 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
	private:

		Contact		_contacts[8];
		int			_count;
	
	public:
	
		Phonebook(void);
		
		~Phonebook(void);
		
		void	addContact(void);
		void	searchContact(void) const;
};

#endif
