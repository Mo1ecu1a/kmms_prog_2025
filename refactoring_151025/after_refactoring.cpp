#include <cmath>
#include <iostream>

int main() {
	double angle;
	std::cout << "Введите угол x: ";
	std::cin >> angle;

	if (std::cos(2 * angle) != 1) {
		double first_function = 1 + std::sin(2 * angle) / (1 - std::cos(2 * angle));
		std::cout << "Значение первой функции: " << first_function << std::endl;
	} else {
		std::cout << "Неверный ввод!" << std::endl; 
	}

	if (std::tan(angle) != 1) {
		double tan_angle = std::tan(angle);
		double second_function = (1 + tan_angle * tan_angle) / (1 - tan_angle * tan_angle);
		std::cout << "Значение второй функции: " << second_function << std::endl;
	} else {
		std::cout << "Неверный ввод!" << std::endl;
	}

	return 0;
}
