#include "sort_algorithms.hpp"

namespace ypa {
	
	void swap(int& a, int& b) {
		int t = a;
		a = b;
		b = t;
	}

	void heapify(int* arr, int size, int rootIndex) {
		int largest = rootIndex;
		int leftChild = 2 * rootIndex + 1;
		int rightChild = 2 * rootIndex + 2;

		if (leftChild < size && arr[leftChild] > arr[largest]) {
			largest = leftChild;
		}

		if (rightChild < size && arr[rightChild] > arr[largest]) {
			largest = rightChild;
		}

		if (largest != rootIndex) {
			swap(arr[rootIndex], arr[largest]);
			heapify(arr, size, largest);
		}
	}

	void buildMaxHeap(int* arr, int size) {
		for (int i = size / 2 - 1; i >= 0; i--) {
			heapify(arr, size, i);
		}
	}

	void heapSort(int* arr, int size) {
		buildMaxHeap(arr, size);

		for (int i = size - 1; i > 0; i--) {
			swap(arr[0], arr[i]);
			heapify(arr, i, 0);
		}
	}

}

