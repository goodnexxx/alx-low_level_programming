#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @cc: the character to be checked
 * Return: returns 0 if its a letter, 0 otherwise
 */
int _isalpha(int cc)
{
	if (cc >= 'a' && cc <= 'z')
	return (1);
	else if (cc >= 'A' && cc <= 'Z')
	return (1);
	else
	return (0);
}
