#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function to concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: return ptr if string success else NULL
 */
char *str_concat(char *s1, char *s2)
{
	int l;
	char *ptr;
	int i;
	int j;
	int v;

	if (s1 == NULL || *s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";

	ptr =  malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	v = (strlen(s1) + strlen(s2) + 1);
	l = strlen(s1);

	for (i = 0; i < l && *s1 != '\0'; i++)
	{
		if (*s1 == '\0')
			break;
		ptr[i] = s1[i];
	}
	j = i;
	if (i != 0)
	{
		for (i = 0; j > i && j < v; i++)
		{
			ptr[j] = s2[i];
			j++;
		}
	}
	else
	{
		for (i = 0; j < v; i++)
		{
			ptr[j] = s2[i];
			j++;
		}
	}
	return (ptr);
}
