#include <iostream>
#include <cstdlib>
#include "array_utils.hpp"
using namespace std;

namespace biv {
	namespace array_utils {

		int* create_array(int size) {
			return new int[size];
		}

		void fill_array(int* array, int size) {
			for (int i = 0; i < size; i++) {
				array[i] = rand() % 100;
			}
		}

		void print_array(int* array, int size) {
			for (int i = 0; i < size; i++){
				cout << array[i] << " ";
			}
			cout << endl;
		}
	}
}