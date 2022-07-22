#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a pointer to a string
 * Return: returns the length of the string as an int
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
