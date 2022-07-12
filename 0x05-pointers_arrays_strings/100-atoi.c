#include "main.h"

/**
 * _atoi - int
 * @s: pointer
 * Return: int.
 */
int _atoi(char *s)
{
	int i, b, c, length, d, digit;

	i = 0;
	b = 0;
	c = 0;
	length = 0;
	d = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && d == 0)
	{
		if (s[i] == '-')
			++b;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			d = 0;
		}
		i++;
	}

	if (d == 0)
		return (0);

	return (c);
}
