#pragma once
#include <string>

class Hangman
{
	std::string secret; //przekazane z konstruktora
	bool alphabet[26]; 
	std::string guessWord;
	int attempt; //ignorujemy poki co
public:
	Hangman(std::string secret);
	std::string getGuess();
	std::string getAlphabet();
	bool guess(char c);
	std::string getSecret();


};