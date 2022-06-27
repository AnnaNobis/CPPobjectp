#pragma once
#include <string>

class Wordle
{
	std::string secret;
	std::string guessed[6];
	std::string answers[6];
	int attempt;
	bool findIfExists(char c);

public:
	Wordle(std::string secret);  //
	std::string test(std::string guess);
	void draw();
	bool isFinished();
	//bool isFinished (std::string colours) // alternatywnie: sprawdzamy czy slowo to jest cale na zielono czyli zgadniete
};

//system("cls"); dodac do draw