#pragma once
class Pokemon
{
private:
	const char* name;

public:

	Pokemon(const char* name);

	Pokemon& operator=(const Pokemon& obj);
};

