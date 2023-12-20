/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:59:41 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/15 16:26:12 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>

template <typename T>
int	easyfind(const T& container, const int nbr);

#include "easyfind.tpp"
