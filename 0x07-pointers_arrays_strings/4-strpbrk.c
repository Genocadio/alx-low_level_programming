#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: Returns 0 means  Success
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		for (; *s; s++)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		}

	return ('\0');
}
