#include "main.h"
/**
 * print_binary - function that converts decimal to binary
 * @n: decimal tom convert
 * Retrun: void
 */
void print_binary(unsigned long int n)
{
	int i;
	int j;


	j = 0;
	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			j = 1;
			_putchar('1');
		}
		else if (j)
		{
			_putchar('0');
		}
	}
	if (!j)
		_putchar('0');
}
