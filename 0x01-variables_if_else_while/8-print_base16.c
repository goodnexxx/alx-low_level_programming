#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * Return: returns 0
 */
int main(void)
{
	int k;
	int l;

	for (k = '0'; k <= '9'; k++)
	putchar(k);
	for (l = 'a'; l <= 'f'; l++)
	putchar(l);
	putchar('\n');
	return (0);
}
