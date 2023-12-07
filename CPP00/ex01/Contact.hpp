/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:03:27 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:20:32 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip> 
#include <cstdlib>

class Contact
{
	private:

		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		std::string		_phoneNumber;
		std::string		_darkestSecret;
	
	public:
	
		Contact(void);
		
		~Contact(void);

		void			setValue(void);
		void			setContact(std::string field, std::string input);
		void			printList(int index) const;
		void			printContact(void) const;
		std::string		getValue(std::string field) const;
};
