#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Array.hpp"
#include "colors.h"

#define MAX_VAL 20

int main(int, char **)
{
	std::cout << BCYN << "Constructors" << RES << std::endl;
	std::cout << CYN "Default" << RES << std::endl;
	Array<int> noNumber;
	std::cout << "size: " << noNumber.size() << std::endl;
	std::cout << std::endl;

	std::cout << CYN "Size n" << RES << std::endl;
	Array<int> numbers(MAX_VAL);
	for (size_t i = 0; i < numbers.size(); i++)
		std::cout << numbers[i] << " ";
	std::cout << std::endl
			  << std::endl;

	std::cout << CYN << "Filling with values" << RES << std::endl;
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	for (size_t i = 0; i < numbers.size(); i++)
		std::cout << numbers[i] << " ";
	std::cout << std::endl
			  << std::endl;

	{
		std::cout << CYN "Operator = " << RES << std::endl;
		Array<int> tmp = numbers;
		for (size_t i = 0; i < tmp.size(); i++)
			std::cout << tmp[i] << " ";
		std::cout << std::endl
				  << std::endl;

		std::cout << CYN "Copy Constructor" << RES << std::endl;
		Array<int> test(tmp);
		for (size_t i = 0; i < test.size(); i++)
			std::cout << test[i] << " ";
		std::cout << std::endl
				  << std::endl;

		std::cout << CYN "Check Deep Copy" << RES << std::endl;
		try
		{
			tmp[1] = 0;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			test[2] = 0;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "Original" << std::endl;
		for (size_t i = 0; i < numbers.size(); i++)
			std::cout << numbers[i] << " ";
		std::cout << std::endl;
		std::cout << "Assignment" << std::endl;
		for (size_t i = 0; i < tmp.size(); i++)
			std::cout << tmp[i] << " ";
		std::cout << std::endl;
		std::cout << "Copy" << std::endl;
		for (size_t i = 0; i < test.size(); i++)
			std::cout << test[i] << " ";
		std::cout << std::endl;
		std::cout << std::endl;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete[] mirror; //
	return 0;
}