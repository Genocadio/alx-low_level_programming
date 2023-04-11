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
	char *ptr;

	l = strlen(str);
	ptr = malloc(l + 1);
	if (str == NULL || ptr == NULL)
		return (NULL);
	strcpy(ptr, str);
	return (ptr);
	free(ptr);
}






