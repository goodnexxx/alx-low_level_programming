#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes the first letter of  word
 * @s: a pointer to the string
 * Return: returns *s
 */
char *cap_string(char *s)
{
	int i, j;
	char k[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
				for (j = 0; k[j] != '\0'; j++)
					if (s[i] == k[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
						s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
