#include "main.h"
#include <stdlib.h>
/**
 * array_range - function to creat array of integers
 * @min: minmum integer to start
 * @max: maximum and last integer
 * Return: array of integers or else NULL
 */

int *array_range(int min, int max)
{
	int i;
	int j;
	int *ptr;

	if (min > max)
		return (NULL);
	j = (max - min + 1);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
