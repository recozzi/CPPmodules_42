/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:37:30 by recozzi           #+#    #+#             */
/*   Updated: 2023/12/06 15:56:28 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _array(new T[0]), _size(0) { }

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) { }

template <typename T>
Array<T>::Array(const Array& src)
{
	this->_array = NULL;
	*this = src;
}

template <typename T>
Array<T>::~Array(void)
{
	if (this->_array)
		delete [] this->_array;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& rhs)
{
	if (this != &rhs)
	{
		this->_size = rhs._size;
		if (this->_array)
			delete [] this->_array;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = rhs._array[i];
	}
	return *this;
}

template <typename T>
T&	Array<T>::operator[](int index) const
{
	if (index < 0 || index >= static_cast<int>(this->_size))
		throw Array<T>::OutOfBoundsException();
	return this->_array[index];
}

template <typename T>
unsigned int	Array<T>::size(void) const { return this->_size; }
