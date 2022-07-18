#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: The destination to be copied to
 * @src: The source of copying
 * @n: Number of bytes to print
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
