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
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (0);
}
