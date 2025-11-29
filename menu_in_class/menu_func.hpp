#pragma once

#include "menu.hpp"

namespace ypa {
	const MenuItem* show_menu(const MenuItem* current);
	const MenuItem* exit(const MenuItem* current);
	const MenuItem* go_back_to_menu(const MenuItem*current);
	
	const MenuItem* vostok(const MenuItem* current);
	const MenuItem* altai(const MenuItem* current);
	const MenuItem* gold_ring_of_russia(const MenuItem* current);

	const MenuItem* vladivostok(const MenuItem* current);
	const MenuItem* sahalin(const MenuItem* current);
	const MenuItem* habarovsk(const MenuItem* current);
	const MenuItem* go_back(const MenuItem* current);
}