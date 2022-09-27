#include "main.h"

/**
 * _strstr - Entry point. It locates a substring
 * @needle: input. Substring to find in haystack
 * @haystack: input. String in which to check for needle
 *
 * Return: Always 0
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int b = 0, c = 0;

	while (haystack[b])
	{
		while (needle[c] && (haystack[b] == needle[0]))
		{
			if (haystack[b + c] == needle[c])
				c++;
			else
				break;
		}
		if (neddle[c])
		{
			b++;
			c = 0;
		}
		else
			return (haystack + b);
	}
	return (0);
}
