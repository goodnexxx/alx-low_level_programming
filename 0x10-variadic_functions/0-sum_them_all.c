#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of argument
 * Return: If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argument;
	int sum = 0;
	unsigned int i;

	va_start(argument, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argument, int);
	}
	va_end(argument);

	return (sum);
}
