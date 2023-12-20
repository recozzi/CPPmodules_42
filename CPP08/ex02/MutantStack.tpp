/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:34:46 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/18 14:43:14 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>() { }

template <typename T>
MutantStack<T>::MutantStack(MutantStack const& src) : std::stack<T>(src) { }

template <typename T>
MutantStack<T>::~MutantStack(void) { }

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack const& rhs)
{
	if (this != &rhs)
		std::stack<T>::operator=(rhs);
	return *this;
}

template <typename T>
typename MutantStack<T>::it	MutantStack<T>::begin(void)
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::it	MutantStack<T>::end(void)
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_it	MutantStack<T>::begin(void) const
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_it	MutantStack<T>::end(void) const
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::rev_it	MutantStack<T>::rbegin(void)
{
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::rev_it	MutantStack<T>::rend(void)
{
	return this->c.rend();
}

template <typename T>
typename MutantStack<T>::const_rev_it	MutantStack<T>::rbegin(void) const
{
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::const_rev_it	MutantStack<T>::rend(void) const
{
	return this->c.rend();
}
