/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:42:14 by mriant            #+#    #+#             */
/*   Updated: 2023/01/17 13:42:11 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
	private: 
		size_t _size;
		T *_array;

	public:
		Array<T>(void);
		Array<T>(unsigned int n);
		Array<T>(Array<T> const &src);
		~Array<T>(void);

		Array<T> &operator=(Array<T> const &rhs);
		T &operator[](std::size_t id);
		const T &operator[](std::size_t id) const;

		size_t size(void) const;
};

#endif

#include "Array.tpp"