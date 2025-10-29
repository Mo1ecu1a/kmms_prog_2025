#include <iostream>
#include "user_interface.hpp"

namespace ypa {
	void showWelcomeMessage() {
		std::cout << "------ПИРАМИДАЛЬНАЯ СОРТИРОВКА------" << std::endl;
	}

	int getArraySize() {
		int size;
		std::cout << "Введите размер массива: ";
		std::cin >> size;
		return size;
	}

	void showResultMessage() {
		std::cout << "------СОРТИРОВКА ЗАВЕРШЕНА------" << std::endl;
	}
}