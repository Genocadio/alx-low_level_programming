#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - function to allocate memory with malloc
*@b: size of bytes
*Return: the pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
