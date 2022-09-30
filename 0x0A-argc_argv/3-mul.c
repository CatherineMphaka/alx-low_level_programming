#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the multiplication of two numbers, and then a new line.
 * @argv: an array of pointers to the arguments
 * @argc: the number of arguments supplied to the program.
 *
 * Return: if there are two arguments, - 0.
 *         if there are no two arduments, - 1.
 */
int main(int argc, char *argv[])
{
	int a, b;
	
	if (argc == 3)
	{
		a = atoi(agrv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");

	return (1);
}
