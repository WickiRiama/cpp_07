/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:54:24 by mriant            #+#    #+#             */
/*   Updated: 2023/01/17 15:07:02 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <exception>

#include "Array.hpp"

//==============================================================================
// Constructors
//==============================================================================

template<typename T>
Array<T>::Array(void): _size(0)
{
	this->_array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	this->_array = new T[this->_size];
	for (size_t i = 0; i < n; i++)
	{
		this->_array[i] = T();
	}
}

template<typename T>
Array<T>::Array(Array<T> const &src)
{
	this->_array = new T[0];
	*this = src;
}

template<typename T>
Array<T>::~Array<T>(void)
{
	delete [] this->_array;
}

//==============================================================================
// Operators
//==============================================================================

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
	if (this != &rhs)
	{
		delete [] this->_array;
		this->_size = rhs.size();
		this->_array = new T[this->_size];
		for (size_t i = 0; i < this->_size; i++)
		{
			this->_array[i] = T(rhs[i]);
		}
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](std::size_t id)
{
	if (id > this->_size - 1)
		throw std::exception();
	return this->_array[id];
}

template<typename T>
const T &Array<T>::operator[](std::size_t id) const
{
	if (id > this->_size - 1)
		throw std::exception();
	return this->_array[id];
}

//==============================================================================
// Functions
//==============================================================================

template<typename T>
size_t Array<T>::size(void) const
{
	return this->_size;
}


#endif