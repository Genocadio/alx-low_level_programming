#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array of integers using the
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The first index where value is located, otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt(size);
	size_t prev = 0;
	size_t i;
	size_t current;

	if (array == NULL)
	{
		return (-1);
	}
	while (array[prev] < value)
	{
		current = prev + step;
		if (current >= size)
		{
			current = size - 1;
		}
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[current] >= value)
		{
			if (prev != 0)
			{
				printf("Value found between indexes [%ld] and [%ld]\n", prev, current);
			}
			break;
		}
		prev += step;
		if (prev >= size)
		{
			return (-1);
		}
	}
	for (i = prev; i <= size - 1; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
