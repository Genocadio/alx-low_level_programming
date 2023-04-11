#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to create an array of char
 * @size: size of memory to be allocated
 * @c: charcter to fill in array
 * Return: arrey mem created or else null
 */
char *create_array(unsigned int size, char c)
{
	char *mem;
	unsigned int i;

	if (size == 0)
		return (NULL);

	mem = malloc(size * sizeof(char));
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		mem[i] = c;
	return (mem);
}
