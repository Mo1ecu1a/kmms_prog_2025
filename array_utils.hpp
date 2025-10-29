#ifndef ARRAY_UTILS_HPP
#define ARRAY_UTILS_HPP

namespace ypa {
	int* createArray(int size);

	void inputArray(int* arr, int size);

	void printArray(const int* arr, int size);

	void deleteArray(int*arr);
}

#endif