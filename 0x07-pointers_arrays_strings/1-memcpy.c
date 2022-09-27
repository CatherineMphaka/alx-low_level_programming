#include "main.h"

/**
 * @n: the number of bytes to be copied
 * @dest: the memory area to be copied to
 * @src: the memory area to be copied from
 * _memcpy: copies a memory to an area
 *
 * Return: pointer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	
	return (dest);
}
