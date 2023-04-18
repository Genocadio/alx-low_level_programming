#include "main.h"
#include <stdlib.h>

/**
 * wordsc - function to calculate number of words in str
 * @str: string from which number of words will be calculated
 * Return: number of words in string
 */
int wordsc(char *str)
{
	int i, words = 0, n_wrd = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (n_wrd == 0)
			{
				words++;
				n_wrd = 1;
			}
		}
		else
			n_wrd = 0;
	}
	return (words);
}
/**
 * strtow - function to split string into words
 * @str: str to be splited
 * Return: array of words from sting with last array being NULL
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, n_words, len, start, end;

	if (str == NULL || *str == '\0')
		return (NULL);

	n_words = wordsc(str);
	words = malloc(sizeof(char *) * (n_words + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < n_words; i++)
	{
		while (str[j] == ' ')
			j++;

		start = j;
		while (str[j] != ' ' && str[j] != '\0')
			j++;

		end = j;
		len = end - start;

		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			words[i][k] = str[start + k];
		words[i][len] = '\0';
	}
	words[n_words] = NULL;
	return (words);
}
