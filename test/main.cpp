#include <iostream>
#include "../print_dynamic_array.h"
#include "lib/userin/userin.h"

int main()
{
	const std::string out_actual_size = "Введите фактический размер массива: ";
	const std::string out_logical_size = "Введите логический размер массива: ";
	const std::string err_msg = 
		"Ошибка! Логический размер массива не может превышать фактический!";

	std::string out_arr_val = "";
	std::string out_arr_val1 = "Введите arr[";
	std::string out_arr_val2 = "]: ";

	int actual_size = 0;
	int logical_size = 0;

	userIn(actual_size, out_actual_size);
	userIn(logical_size, out_logical_size);

	if (actual_size < logical_size)
	{
		std::cout << err_msg << std::endl;

		return 1;
	}

	int* arr = new int[actual_size]();

	for (int i = 0; i < logical_size; ++i)
	{
		std::string i_str = std::to_string(i);
		out_arr_val = out_arr_val1 + i_str + out_arr_val2;

		userIn(arr[i], out_arr_val);
	}

	print_dynamic_array(arr, logical_size, actual_size);

	delete[] arr;
	arr = nullptr;

	return 0;
}
