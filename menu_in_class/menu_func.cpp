#include <cstdlib>
#include <iostream>
#include "menu_items.hpp"
#include "menu_func.hpp"

const ypa::MenuItem* ypa::show_menu(const MenuItem* current) {
	std::cout << "Привет, давай отправимся в путешествие по России!" << std::endl;
	for (int i = 1; i < current->children_count; i++)	{	
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << " Путешествие по России начинается!";
	
	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	
	return current->children[user_input];
}

const ypa::MenuItem* ypa::exit(const MenuItem* current) {
	std::exit(0);
}



const ypa::MenuItem* ypa::vostok(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const ypa::MenuItem* ypa::altai(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const ypa::MenuItem* ypa::gold_ring_of_russia(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}



const ypa::MenuItem* ypa::vladivostok(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const ypa::MenuItem* ypa::sahalin(const MenuItem* current) {
	std::cout << current->title << std::endl <<std::endl;
	return current->parent;
}

const ypa::MenuItem*  ypa::habarovsk(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const ypa::MenuItem* ypa::go_back(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}