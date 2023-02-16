#include <iostream>
#include "print_dynamic_array.h"


void print_dynamic_array(int* arr, int logical_size, int actual_size)
{
	const std::string out_arr = "Динамический массив: ";
	const char symv_null = '_';
	const char symv_split = ' ';

	std::cout << out_arr;

	for (int i = 0; i < actual_size; ++i)
	{
		// std::string val_str = std::to_string(arr[i] == 0 ? symv_null : arr[i]);
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
