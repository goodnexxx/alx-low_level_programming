#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: number of command-line arguments
 * @argv: array of strings that contain each command-line argument
 * Return: returns 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *alx;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	alx = (char *) main;
	for (i = 0; i < j; i++)
	{
		if (i == j - 1)
		{
			printf("%02hhx\n", alx[i]);
			break;
		}
		printf("%02hhx ", alx[i]);
	}
	return (0);
}
