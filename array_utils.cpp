#include <iostream>
#include "array_utils.hpp"

namespace ypa {
	int* createArray (int size) {
		return new int[size];
	}

	void inputArray(int* arr, int size) {
		std::cout << "Введите " << size << " элементов вашего массива:" << std::endl;

		for (int i = 0; i < size; i++) {
			std::cin >> arr[i];
		}
	}

	void printArray(const int* arr, int size) {
		std::cout << " ";

		for (int i = 0; i < size; i++) {
			std::cout << arr[i] << " ";
		}

		std::cout << std::endl;
	}

	void deleteArray(int* arr){
		delete[] arr;
	}
}
