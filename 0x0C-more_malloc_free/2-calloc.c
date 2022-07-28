#include "main.h"

/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;

	p = malloc(j);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (j); i++)
		p[i] = 0;

	return ((void *) p);
}
