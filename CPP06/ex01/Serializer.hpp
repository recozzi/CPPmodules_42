/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:46:23 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:50:01 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

typedef struct s_data
{
	std::string str;
	int 		nbr;
	char		c;
	float		f;
	double		d;
} Data;

class Serializer
{
	private:

		Serializer(void);
		Serializer(Serializer const& src);
		
		~Serializer(void);

		Serializer&	operator=(Serializer const& rhs);
		
	public:

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};
