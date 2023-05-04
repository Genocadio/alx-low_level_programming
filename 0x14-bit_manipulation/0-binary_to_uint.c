#include "main.h"
/**
 * binary_to_uint - function that converts binary to decimal
 * @b: binary to convert
 * Return: decimal number if succcess or else NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int intgr = 0;
	size_t l = 0;
	int i;
	int j;
	const char *ptr;

	if (b == NULL)
	{
		return (0);
	}
	ptr = b;
	while (*ptr != '\0')
	{
		++l;
		++ptr;
	}
	j = 1;
	for (i = l - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			intgr += j;
		j *= 2;
	}
	return (intgr);
}
