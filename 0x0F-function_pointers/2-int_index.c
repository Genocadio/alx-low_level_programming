#include "function_pointers.h"
/**
 * int_index - function that searches for integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function to compare values
 * Return: returns index of element for which cmp doesnt return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(cmp) || size <= 0 || !(array))
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}


