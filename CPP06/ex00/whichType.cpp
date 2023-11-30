/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whichType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:29:56 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/24 16:26:07 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static int	isSpecial(const std::string& str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
		return 1;
	return 0;
}

static int	isChar(const std::string& str, size_t& len)
{
	if (len == 1 && !isdigit(str[0]))
		return 1;
	if (len == 3 && str[0] == '\'' && str[2] == '\'')
		return 1;
	return 0;
}

static int	isInt(const std::string& str, size_t& len)
{
	int		i = 0;
	bool	flag = false;

	if (str[0] == '-' || str[0] == '+')
	{
		i++;
		flag = 1;
	}
	while ((str[i] && len > 0 && len < 12) || (str[i] && !flag && len > 0 && len < 11))
	{
		if (!isdigit(str[i]))
			return 0;
		i++;
	}
	return 1;
}

static int	isFloat(const std::string& str, size_t& len, size_t& dot)
{
	for (int j = dot - 1; j >= 0; j--)
	{
		if (!isdigit(str[j]) && j != 0)
			return 0;
		if (!isdigit(str[j]) && j == 0 && str[j] != '+' && str[j] != '-')
			return 0;
	}
	for (size_t i = dot + 1; i < len; i++)
	{
		if (!isdigit(str[i]) && str[i] != 'f')
			return 0;
		if (str[i] == 'f' && i != len - 1)
			return 0;
	}
	return 1;
}

e_type  whichType(const std::string& str, size_t& len)
{
    size_t  dot = str.find('.');
    size_t  f = str.find('f');
    if (dot == std::string::npos)
    {
        if (isSpecial(str))
            return SPECIAL;
        if (isChar(str, len))
            return CHAR;
        if (isInt(str, len))
            return INT;
    }
    if (f != std::string::npos && dot != std::string::npos)
    {
        if (isFloat(str, len, dot))
        return FLOAT;
    }
    else if (f == std::string::npos && dot != std::string::npos)
        return DOUBLE;
    return INVALID;
}
