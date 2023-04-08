#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer
 * @accept: orgin of bytes to be printed
 * Return: Always 0 means success
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int f;
	int i;

	f = 0;


	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				i++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (f);
			}
		}
	}
	return (f);
}
