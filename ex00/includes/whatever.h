/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:47:15 by mriant            #+#    #+#             */
/*   Updated: 2023/01/16 17:09:09 by mriant           ###   ########.fr       */
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

#endif