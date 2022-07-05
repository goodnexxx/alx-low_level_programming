#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet completely, 10 times
 * return: Returns nothing
 */
void print_alphabet_x10(void)
{
	int alpha;
	int times10;

	for (times10 = 0; times10 <= 9; times10++)
{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	_putchar(alpha);
}
	_putchar('\n');}
}
