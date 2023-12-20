/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:58:13 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/18 15:13:36 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:

		MutantStack(void);
		MutantStack(MutantStack const& src);

		~MutantStack(void);

		MutantStack&	operator=(MutantStack const& rhs);

		typedef typename std::deque<T>::iterator				it;
		typedef typename std::deque<T>::const_iterator			const_it;

		typedef typename std::deque<T>::reverse_iterator		rev_it;
		typedef typename std::deque<T>::const_reverse_iterator	const_rev_it;

		it				begin(void);
		it				end(void);
		const_it		begin(void) const;
		const_it		end(void) const;

		rev_it			rbegin(void);
		rev_it			rend(void);
		const_rev_it	rbegin(void) const;
		const_rev_it	rend(void) const;
};

#include "MutantStack.tpp"
