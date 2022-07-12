#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: the string of characters to be printed
 * Return: returns nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
		_putchar('\n');
}
