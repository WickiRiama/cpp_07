/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:13:20 by mriant            #+#    #+#             */
/*   Updated: 2023/01/17 11:31:04 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <cstdlib>

template<typename T, typename U>
void iter(T *array, size_t size, U (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
	{
		f(array[i]);
	}
}

template<typename T>
void printOne(T &element)
{
	std::cout << element << " ";
}

template<typename T>
void AddOne(T &element)
{
	element++;
}

template<typename T>
bool isEven(T &element)
{
	bool result = element % 2 == 0;
	std::cout << std::boolalpha << result << " ";
	std::cout.unsetf(std::ios_base::boolalpha);

	return result;
}


#endif