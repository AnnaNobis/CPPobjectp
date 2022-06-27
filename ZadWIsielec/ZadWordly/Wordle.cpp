#include <stdlib.h>
#include "Wordle.hpp"
#include <string>

bool Wordle::findIfExists(char c)
{
	for (int i = 0; i < 5; ++i)
	{

	}

	return false;
}

Wordle::Wordle(std::string secret)
{
	this->secret = secret;

	
	answers[0] = "B B B B B";

	
}

std::string Wordle::test(std::string guess)
{
	if (attempt <6)
	{ 
	guessed[attempt] = guess;
	attempt++;

 std::string answer('B', 5);

	for (int i = 0; i < 5; ++i)
	{
		if (secret[i] == guess[i])
		{
			answer[i] = 'G';
		}
	}
	answers[attempt] = answer;

	return std::string ();
}

// wypisz obie tablice, jedna obok drugiej + na poczatku wyczyscic ekran

void Wordle::draw()  
{
	system ("cls")
	for (int i = 0; i < 6; ++i)
	{
		std::cout << guessed[i] << '\t' << answers[i] << std::endl;
	}
	
}

bool Wordle::isFinished()
{
	return (attempt == 6) || (answer[attempt - 1] == "GGGGG");
	
	//if (attempt == 6) || answers[attempt - 1] == "GGGGG";
	//	return true;
	// else
	//return false;
}





