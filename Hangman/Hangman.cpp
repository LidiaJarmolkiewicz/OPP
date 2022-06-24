#include "Hangman.hpp"
#include<iostream>


Hangman::Hangman(std::string secret)
{
	this->secret = secret;
	this->guessedWord = secret;
	for (int i = 0; i < secret.length(); ++i)
	{
		guessedWord[i] =  '_' ;
	}
		
	for (int i = 0; i < 26; ++i)
	{
		alphabet[i] = false;
	}
}

std::string Hangman::getGuess()
{
	return guessedWord;
}

std::string Hangman::getAlphabet()
{
	std::string result;
	for (int i = 0; i < 26; ++i)
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


	for (int i = 0; i < secret.length(); i++)
	{
		if (secret[i] == c)
		{
			guessedWord[i] = c;
		}
			

	}
	return guessedWord == secret;

}
	
	std::string Hangman::getSecret()
	{
		return secret;
	}

	//bool Hangman::attemptsLeft(char c)
	//{

		//return attempt;
		
	//}

	


	//for (int i = 0; i < secret.length(); ++i)
	//{
	//	if (secret[i] == c)
	//	{
	//		guessedWord[i] = c;
	//	}
	//	else
	//	{
	//		for (int i = 0; i < 2; ++i)
	//		{
	//			attepmt += i;
	//		}
	//	}

	//	for (int i = 0; i < (secret.length() + 2); ++i)
	//	{

	//		if (attempt < 10)
	//		{
	//			return guessedWord == secret;
	//		}
	//		else
	//		{

	//			std::cout << "Przekroczyles limit prob! " << std::endl;
	//			break;


	//		}
	//	}

	//}