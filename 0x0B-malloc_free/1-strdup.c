#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that dublicate a string
 * @str: string to be dublicated
 * @ptr destination
 * Return: dublicated string or else NULL
 */
char *_strdup(char *str)
{
	int l;
	int i;
	char *ptr;

	l = strnlen(str, sizeof(str));
	ptr = malloc(sizeof(char) * (l + 1));
	if (str == NULL || ptr < str)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
	free(ptr);
}






