/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:46:59 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/30 11:26:12 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BASE_HPP
# define BASE_HPP

# include <unistd.h>
# include <cstdlib>
# include <iostream>
# include <ctime>

class Base
{
	public:
		virtual ~Base(void);
};

void	identify(Base* p);
void	identify(Base& p);
Base*	generate(void);

#endif
