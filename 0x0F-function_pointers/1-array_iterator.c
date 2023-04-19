#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as parameter
 * @array: array
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!(array) || !(action))
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

