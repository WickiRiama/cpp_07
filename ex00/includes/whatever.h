/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:47:15 by mriant            #+#    #+#             */
/*   Updated: 2023/01/17 09:53:57 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template<typename T>
void swap(T &x, T &y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template<typename T>
T const &min(T const &x, T const &y)
{
	if (x < y)
		return x;
	else
		return y;
}

template<typename T>
T const &max(T const &x, T const &y)
{
	if (x > y)
		return x;
	else
		return y;
}


#endif