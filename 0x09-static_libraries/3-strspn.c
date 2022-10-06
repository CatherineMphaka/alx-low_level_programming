#include "main.h"

/**
 * _strspn - the entry point. It gets the length of a prefix substring
 * @accept: input. A string to check against
 * @s: input. A string to check
 *
 * Return: Always 0
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, j;

	for (n = 0; s[n]; n++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[n] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (n);
}
