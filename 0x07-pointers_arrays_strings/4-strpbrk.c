#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a unction that searches a string for a set bytes
 * @s: The string to search
 * @accept: the result
 * Return: Returns a pointer to the byte in s that matches one of the bytes
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
		if (s[i] == accept[j])
			{
			return ((s + i));
			}
		}
	}
	return (NULL);
}
