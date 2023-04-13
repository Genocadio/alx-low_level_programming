#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc
 * @ptr:  pointer to old memory
 * @old_size: size allocated for ptr
 * @new_size: new bytes to allocate
 * Return: pointer to new memory or else Null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	char *np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	np = malloc(new_size);
	if (!np)
		return (NULL);
	pt = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			np[i] = pt[i];
	}

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			np[i] = pt[i];
	}
	free(ptr);
	return (np);
}
