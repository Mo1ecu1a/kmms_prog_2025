#include <iostream>
#include "sort_algorithms.hpp"
#include "array_utils.hpp"
#include "user_interface.hpp"

int main() {
	ypa::showWelcomeMessage();

	const int size = ypa::getArraySize();
	int* arr = ypa::createArray(size);
	ypa::inputArray(arr, size);

	std::cout << "Исходный массив:";
	ypa::printArray(arr, size);

	ypa::heapSort(arr, size);
	std::cout << "Отсортированный массив:";
	ypa::printArray(arr, size);

	ypa::showResultMessage();
	ypa::deleteArray(arr);

	return 0;
}