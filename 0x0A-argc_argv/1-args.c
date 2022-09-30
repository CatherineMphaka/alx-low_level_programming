#include <stdio.h>

/**
 * main - prints the number of arguments passed to it.
 * @argv: an array of pointers to the arguments.
 * @argc: the number of arguments supplied to the program.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
