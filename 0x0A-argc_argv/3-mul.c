#include <stdio.h>
#include <stdlib.h>

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
	int num1, num2, prod;

	if (argx != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
