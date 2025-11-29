#include <cstddef>
#include "menu.hpp"
#include "menu_func.hpp"
#include "menu_item.hpp"

const ypa::MenuItem ypa::GO_BACK =  {
	"0 - вернуться к выбору региона...", ypa::go_back, &ypa::GO_BACK;
};

const ypa::MenuItem ypa::GO_BACK_TO_MENU = {
	"0 - вернуться в главное меню...", ypa::go_back, &ypa::GO_BACK_TO_MENU;
};

const ypa::MenuItem ypa::VLADIVOSTOK = {
	"1 - я хочу отправиться в Владивосток", ypa::vladivostok, &ypa::VOSTOK;
};

const ypa::MenuItem ypa::SAHALIN = {
	"2 - я хочу отправиться на Сахалин", ypa::sahalin, &ypa::SAHALIN;
};

const ypa::MenuItem ypa::HABAROVSK = {
	"3 - я хочу отправиться в Хабаровск", ypa::habarovsk. &ypa::HABAROVSK;
};

namespace {
	const ypa::MenuItem* const vostok_children[]  =  {
		&ypa::GO_BACK;
		&ypa::VLADIVOSTOK;
		&ypa::SAHALIN;
		&ypa::HABAROVSK;
	};
	const int vostok_size = sizeof(vostok_children) / sizeof(vostok_children[0]);
}

const ypa::MenuItem ypa::VOSTOK = {
	"1 - я хочу отправиться в путешествие на Дальний Восток! ", ypa::show_menu, &ypa::MAIN, vostok_children, vostok_size
};

const ypa::MenuItem ypa::ALTAI = {
	"2 - я хочу отправиться в путешествие на Алтай!", ypa::show_menu, &ypa::MAIN
};

const ypa::MenuItem ypa::GOLD_RING_OF_RUSSIA = {
	"3 - я хочу отправиться в путешествие по Золотому Кольцу России!", ypa::show_menu, &ypa::MAIN
};

const ypa::MenuItem ypa::EXIT = {
	"0 - .лучше останусь дома..", ypa::exit, &ypa::MAIN
};


namespace {
	const ypa::MenuItem* const russia_children[] = {
		&ypa::GO_BACK_TO_MENU;
		&ypa::VOSTOK;
		&ypa::ALTAI;
		&ypa:GOLD_RING_OF_RUSSIA;
	};
	const int russia_size = sizeof(russia_children) / sizeof(russia_children[0]);
}


namespace {
	const ypa::MenuItem* const main_children[] = {
		&ypa::EXIT,
		&ypa::TRAVEL
	};
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}
