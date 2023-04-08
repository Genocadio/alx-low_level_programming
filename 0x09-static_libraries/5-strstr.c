
#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *z = haystack;
		char *q = needle;

		while (*z == *q && *q != '\0')
		{
			z++;
			q++;
		}

		if (*q == '\0')
			return (haystack);
	}

	return (0);
}
