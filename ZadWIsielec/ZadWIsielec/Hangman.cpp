#include "Hangman.hpp"

Hangman::Hangman(std::string secret)
{
	this-> secret = secret;
	this-> guessWord = secret;
	int attempt = 5;

	for (int i = 0; i < secret.size(); ++i)
	{
		guessWord[i] = '_';
	}

	for (int i = 0; i < 26; ++i)
	{
		alphabet[i] = false;
	}

}

std::string Hangman::getGuess()
{
	return guessWord;
}

std::string Hangman::getAlphabet()
{
	std::string result;
	for (int i = 0; i < 26; i++)
	{
		if (!alphabet[i])
		{
			result += 'a' + i;
		}
		else
		{
			result += '_';
		}
	}
	return result;
}

bool Hangman::guess(char c)
{
	alphabet[c - 'a'] = true;
	bool guessed = false; // zapamiêtujemy fakt wejscia do if
	std::string previous = guessWord;


	for (int i = 0; i < secret.size(); ++i)
	{
		if (secret[i] == c)
		{
			guessWord[i] = c;
			guessed = true;
		}
	}
//	if (previous == guessWord) // alternatywna wersja if(!guessed)
	if (!guessed)
	{
		attempt--;
	}
	return (guessWord == secret) || attempt ==0;
}


std::string Hangman::getSecret()
{
	return std::string();
}
