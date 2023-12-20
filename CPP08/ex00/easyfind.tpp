/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:06:25 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/15 16:26:22 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
int	easyfind(const T& container, const int nbr)
{
	typename T::const_iterator	it;
	typename T::const_iterator	start = container.begin();
	typename T::const_iterator	end = container.end();

	it = std::find(start, end, nbr);
	
	return (it != end);
}
