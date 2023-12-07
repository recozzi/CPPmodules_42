/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:00:36 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:47:34 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <cstdlib>
#include <limits>

#define MIN_INT -2147483648
#define MAX_INT 2147483647
#define MIN_FLOAT -3.40282e+38
#define MAX_FLOAT 3.40282e+38
#define MIN_DOUBLE -1.79769e+308
#define MAX_DOUBLE 1.79769e+308

enum    e_type
{
    SPECIAL = 0,
    CHAR = 1,
    INT = 2,
    FLOAT = 3,
    DOUBLE = 4,
    INVALID = -1
};

class	ScalarConverter
{
	private:

		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &src);
		
		~ScalarConverter(void);

		ScalarConverter	&operator=(ScalarConverter const &rhs);

	public:

		static void	convert(const std::string& str);
};

e_type	whichType(const std::string& str, size_t& len);
void	printSpecial(const std::string& str);
void	convertChar(const std::string& str, size_t& len);
void	convertInt(const std::string& str);
void	convertFloat(const std::string& str);
void	convertDouble(const std::string& str);
