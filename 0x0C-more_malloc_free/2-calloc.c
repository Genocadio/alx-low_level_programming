#include "main.h"
#include <stdlib.h>
/**
 * _calloc - unction that allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: size of one element
 * Return: returns pointer to allocated memory or else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int j;

	j = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		ptr[i] = 0;
	return (ptr);
}



