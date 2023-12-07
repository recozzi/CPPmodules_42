/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:30:41 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/07 10:51:45 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	printArr(const T& elem)
{
	std::cout << elem << std::endl;
}

template <typename T>
void	iter(T* arr, size_t len, void (*f)(const T&))
{
	if (!arr || !f)
		return ;
	for (size_t i = 0; i < len; i++)
		(*f)(arr[i]);
}
