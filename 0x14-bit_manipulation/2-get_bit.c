#include "main.h"
/**
 * get_bit - function that returns value of a bit at a given index
 * @index: index to find the bit at
 * @n: value to get bit from at a given index
 * Return: value of bit at agiven index or else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	i = (n / (1ul << index)) % 2;
	return (i);
}
