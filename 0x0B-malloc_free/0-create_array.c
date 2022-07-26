#include "main.h"

/**
 * create_array -  a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: the character to create for
 * Return: returns a pointer to the array
 * returns NULL if size = 0 or if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc((size) * sizeof(char));
	if (p == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	p[i] = c;
	return (p);
}
