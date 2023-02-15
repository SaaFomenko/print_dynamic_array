#include <iostream>
#include "../print_dynamic_array.h"
//#include "../lib/valid_str_to_int.h"

int main()
{
	const std::string out_actual_size = "Введите фактический размер массива: ";
	const std::string out_logical_size = "Введите логический размер массива: ";
	const std::string out_arr_val1 = "Введите arr[";
	const std::string out_arr_val2 = "]: ";

	std::string in_str = "none";

	int actual_size = 0;
	int logical_size = 0;

	std::cout << out_actual_size;
	std::cin >> in_str;

	std::cout << out_logical_size;
	std::cin >> in_str;

	return 0;
}
