/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:24:43 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/06 14:31:22 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main(void)
{
	int		arr[] = {1, 2, 3, 4, 5};
	char	str[] = "Hello World!";

	iter(arr, 5, printArr);
	std::cout << std::endl;
	iter(str, 12, printArr);

	return 0;
}