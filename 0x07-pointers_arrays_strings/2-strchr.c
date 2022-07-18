#include "main.h"
#include <stdio.h>

/**
*  _strchr - locates a string
*
* @s: string to locate first occurence of c
* @c: character to locate
* Return: Returns a pointer to the first occurrence of the character c
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (s[i] == c)
			return ((s + i));
		if (s[i] == 0)
			break;
	}
	return (NULL);
}
