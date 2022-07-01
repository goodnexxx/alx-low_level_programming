#include<stdio.h>

/**
 * main - prints lower case alphabet in reverse
 * Return: return 0
 */
int main(void)
{
	int g;

	for (g = 'z'; g >= 'a'; g--)
	putchar(g);
	putchar('\n');
	return (0);
}
