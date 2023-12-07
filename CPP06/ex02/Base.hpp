/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:46:59 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:50:30 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <unistd.h>
#include <cstdlib>
#include <iostream>
#include <ctime>

class Base
{
	public:
		virtual ~Base(void);
};

void	identify(Base* p);
void	identify(Base& p);
Base*	generate(void);
