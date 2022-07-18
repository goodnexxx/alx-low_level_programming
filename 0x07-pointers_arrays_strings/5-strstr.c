#include "main.h"

/**
 * _strstr - function locate
 * @haystack: location to search
 * @needle: what is located
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
			while (*needle)
			{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
