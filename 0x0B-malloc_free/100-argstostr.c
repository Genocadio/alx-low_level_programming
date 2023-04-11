#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 * Return: a pointer to a new string containing the concatenated arguments,
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;
	str = malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
