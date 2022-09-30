#include <stdio.h>

/**
 * main - prints the name of the program followed by a new line.
 * @argv: this is an array of pointers to the argument
 * @argc: the number of arguments supplied to the program
 *
 * Return: Always 0.
 */
int main(int __attribute((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
