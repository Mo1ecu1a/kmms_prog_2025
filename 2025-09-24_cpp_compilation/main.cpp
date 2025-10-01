#include <iostream>
#include <cstdlib>
#include <ctime>
#include "array_utils.hpp"
#include "sorti.hpp"

using namespace std;

int main(){
	setlocale(LC_ALL, "");

	int size;
	cout << "Введите размер массива:";
	cin >> size;

	int* array = biv::array_utils::create_array(size);
	biv::array_utils::fill_array(array, size);

	cout << "Изначальный массив:";
	biv::array_utils::print_array(array, size);

	biv::sort::selection_sort(array, size);

	cout << "Отсортированный массив:";
	biv::array_utils::print_array(array, size);

	return 0;

}