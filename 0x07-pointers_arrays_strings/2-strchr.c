#include "main.h"

/**
 * _strchr - the entry point. It locates a character in a string
 * @s: string pointed to. String to check
 * @c: input. Character to check for
 *
 * Return: Always 0 pointer to spot in s with c or null
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
