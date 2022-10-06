#include "main.h"

/**
 * _memcpy - copies a memory area
 * @n: the number of bytes to be copied
 * @dest: the memory area to be copied to
 * @src: the memory area to be copied from
 *
 * Return: pointer to the copied memory block (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	
	
	return (dest);
}
