#include <stdio.h>

/**
 * main - prints all the arguments that it receives
 * @argv: an array of pointers to the arguments
 * @argc: the number of arguments supplied to the program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
