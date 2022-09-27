#include "main.h"

/**
 * _strpbrk - Entry point. Searches a string for any of a set of bytes
 * @s: input. String to check
 * @accept: input. String to check against
 *
 * Return: Always 0
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int j, k;

	for (j = 0; s[j]; j++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[j] == accept[k])
				break;
		}
		if (accept[k])
			return (s +j);
	}
	return (0);
}
