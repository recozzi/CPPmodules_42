/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:45:24 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/20 16:22:56 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	{
		std::cout << std::endl;
		std::cout << "\033[1;37m========== Mutant Stack ==========\033[0m" << std::endl;
		
		MutantStack<int>	mutantStack;

		mutantStack.push(5);
		mutantStack.push(17);

		std::cout << std::endl;
		std::cout << "Top: " << mutantStack.top() << std::endl;

		mutantStack.pop();

		std::cout << "Size after pop: " << mutantStack.size() << std::endl;

		mutantStack.push(3);
		mutantStack.push(5);
		mutantStack.push(737);
		mutantStack.push(0);

		std::cout << "Size after push: " << mutantStack.size() << std::endl;

		MutantStack<int>::it		it = mutantStack.begin();
		MutantStack<int>::it		ite = mutantStack.end();
		
		const MutantStack<int>	s(mutantStack);
		
		MutantStack<int>::const_it	constIt = s.begin();
		MutantStack<int>::const_it	constIte = s.end();

		++it;
		--it;

		std::cout << "iterator: ";
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		std::cout << "const iterator: ";
		while (constIt != constIte)
		{
			std::cout << *constIt << " ";
			++constIt;
		}
		std::cout << std::endl;
	}

	{
		std::cout << std::endl;
		std::cout << "\033[1;37m========== Mutant List ==========\033[0m" << std::endl;
		
		std::list<int>	mutantList;

		mutantList.push_back(5);
		mutantList.push_back(17);

		std::cout << std::endl;
		std::cout << "Back: " <<mutantList.back() << std::endl;

		mutantList.pop_back();

		std::cout << "Size after pop: " << mutantList.size() << std::endl;

		mutantList.push_back(3);
		mutantList.push_back(5);
		mutantList.push_back(737);
		mutantList.push_back(0);

		std::cout << "Size after push: " << mutantList.size() << std::endl;

		std::list<int>::iterator		it = mutantList.begin();
		std::list<int>::iterator		ite = mutantList.end();

		const std::list<int>	s(mutantList);
		
		std::list<int>::const_iterator	constIt = s.begin();
		std::list<int>::const_iterator	constIte = s.end();

		++it;
		--it;

		std::cout << "iterator: ";
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		std::cout << "const iterator: ";
		while (constIt != constIte)
		{
			std::cout << *constIt << " ";
			++constIt;
		}
		std::cout << std::endl << std::endl;
	}

	return 0;
}
