/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:23:45 by mriant            #+#    #+#             */
/*   Updated: 2023/01/17 11:30:29 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

#include "iter.h"
#include "colors.h"

void toUpper(std::string &s)
{
	for (size_t i = 0; i < s.size(); i++)
	{
		s[i] = toupper(s[i]);
	}
}

int main(void)
{
	std::cout << BCYN << "Int Array" << RES << std::endl;
	int intArray[10] = {7, -5, 3, -9, 1, -8, 2, -0, 4, -6};

	std::cout << CYN << "Print function" << RES << std::endl;
	iter<int, void>(intArray, 10, printOne);
	std::cout << std::endl;

	std::cout << CYN << "AddOne function" << RES << std::endl;
	iter<int, void>(intArray, 10, AddOne);
	iter<int, void>(intArray, 10, printOne);
	std::cout << std::endl;

	std::cout << CYN << "isEven function" << RES << std::endl;
	iter<int, bool>(intArray, 10, isEven);
	std::cout << std::endl;

	std::cout << std::endl;

	std::cout << BCYN << "String Array" << RES << std::endl;
	std::string stringArray[5] = {"bonjour", "hello", "guten tag", "konnichiha", "nihao"};

	std::cout << CYN << "Print function" << RES << std::endl;
	iter<std::string, void>(stringArray, 5, printOne);
	std::cout << std::endl;

	std::cout << CYN << "toUpper function" << RES << std::endl;
	iter<std::string, void>(stringArray, 5, toUpper);
	iter<std::string, void>(stringArray, 5, printOne);
	std::cout << std::endl;

	std::cout << std::endl;

	std::cout << BCYN << "Unsigned int Array" << RES << std::endl;
	unsigned int uIntArray[10] = {7, 5, 3, 9, 1, 8, 2, 0, 4, 6};

	std::cout << CYN << "Print function" << RES << std::endl;
	iter<unsigned int, void>(uIntArray, 10, printOne);
	std::cout << std::endl;

	std::cout << CYN << "AddOne function" << RES << std::endl;
	iter<unsigned int, void>(uIntArray, 10, AddOne);
	iter<unsigned int, void>(uIntArray, 10, printOne);
	std::cout << std::endl;

	std::cout << CYN << "isEven function" << RES << std::endl;
	iter<unsigned int, bool>(uIntArray, 10, isEven);
	std::cout << std::endl;
}