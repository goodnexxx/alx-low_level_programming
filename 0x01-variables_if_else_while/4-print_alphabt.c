#include<stdio.h>

/**
 * main - loops alphabet in lower case except 'q' & 'e'
 * Return: returns 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'e' && ch != 'q')
	putchar(ch);
	putchar('\n');
	return (0);
}
