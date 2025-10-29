#include <iostream>
#include "sorti.hpp"

namespace biv {
	namespace sort {

		void selection_sort(int* array, int size) {
			for (int i = 0; i < size - 1; i++) {
				int min_index = i;

				for (int j = i + 1; j < size; j++) {
					if (array[j] < array[min_index]) {
						min_index = j;
					}
				}

				if (min_index != i){
					int t = array[i];
					array[i] = array[min_index];
					array[min_index] = t;
				}
			}
		}
	}
}