#include "main.h"
/**
 * get_endianness - function that checks endianness
 * Return: void
 */
int get_endianness(void)
{
	unsigned int i = 22;
	char *ptr = (char *)&i;

	if (*ptr == 0)
		return (0);
	else
		return (1);
}
