#include<stdio.h>

/**
 * main - two loops that print the alphabet lower and upper case
 * Return: returns 0
 */
int main(void)
{
	int c;
	int h;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (h = 'A'; h <= 'Z'; h++)
		putchar(h);
	putchar('\n');
	return (0);
}
