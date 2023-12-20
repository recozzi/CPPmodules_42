/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:22:32 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/18 15:25:24 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	vector;
	std::list<int>		list;
	std::deque<int>		deque;

	{
		for (int i = 0; i < 10; i++)
		{
			vector.push_back(i);
			list.push_back(i);
			deque.push_back(i);
		}
		int value = -1;
		std::cout << std::endl;
		if (easyfind(vector, value) && easyfind(list, value) && easyfind(deque, value))
			std::cout << value << " -> Value is in the containers." << std::endl;
		else
			std::cout << value << " -> Value not found." << std::endl;
	}

	{
		for (int i = 0; i < 10; i++)
		{
			vector.push_back(i);
			list.push_back(i);
			deque.push_back(i);
		}
		int value = 5;
		std::cout << std::endl;
		if (easyfind(vector, value) && easyfind(list, value) && easyfind(deque, value))
			std::cout << value << " -> Value is in the containers." << std::endl;
		else
			std::cout << value << " -> Value not found." << std::endl;
		std::cout << std::endl;
	}

	return 0;
}
