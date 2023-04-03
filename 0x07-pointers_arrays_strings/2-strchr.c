#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] >= '\0')
	{
		if (s[j] == c)
			return (&s[j]);
		j++;
	}
	return (0);
}

