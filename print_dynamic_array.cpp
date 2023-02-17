#include <iostream>
#include "print_dynamic_array.h"


void print_dynamic_array(int* arr, int logical_size, int actual_size)
{
	if (logical_size > actual_size)
	{
		throw "Error! Logical size do not over actual size!";
	}

	const char symv_null = '_';
	const char symv_split = ' ';

	for (int i = 0; i < actual_size; ++i)
	{
		if (arr[i] == 0)
		{
			std::cout << symv_null << symv_split;
		}
		else
		{
			std::cout << arr[i] << symv_split;
		}
	}

	std::cout << std::endl;
}
