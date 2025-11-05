#ifndef SORT_ALGORITHMS_HPP
#define SORT_ALGORITHMS_HPP

namespace ypa {
	void heapSort(int* arr, int size);

	void buildMaxHeap(int* arr, int size);
	void heapify(int* arr, int size, int rootIndex);
	void swap(int& a, int& b);
}

#endif