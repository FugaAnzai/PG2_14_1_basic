#include "Pokemon.h"
#include <stdio.h>

Pokemon::Pokemon(const char* name) {
	this->name = name;
	printf("%s\n", this->name);
}

Pokemon& Pokemon::operator=(const Pokemon& obj) {
	name = obj.name;
	printf("%s\n", name);
	return *this;
}