#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: length of s2
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int l;
	unsigned int k = 0;

	while (s1 && s1[i])
		i++;
	while (s2 && s2[j])
		j++;

	if (n < j)
		str = malloc(i + n + 1);
	else

		str = malloc(i + j + 1);

	if (!str)
		return (NULL);

	for (l = 0; l < i; l++)
		str[l] = s1[l];

	while (n < j && l < (i + n))
	{
		str[l] = s2[k];
		l++;
		k++;
	}
	while (n >= j && l < (i + j))
	{
		str[l] = s2[k];
		l++;
		k++;
	}
	return (str);
}
