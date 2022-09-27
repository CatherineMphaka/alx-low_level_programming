#include "main.h"

/**
 * _memset - it fills a memory block with a constant byte
 * n: the number of bytes that are used
 * s: the address to the memory block
 * b: the character (char) to be used
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n);
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
