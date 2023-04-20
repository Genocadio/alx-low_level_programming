#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns sum of its parameters
 * @n: number of parameters
 * Return: sum of parameters or else 0
 */
int sum_them_all(const unsigned int n, ...)
{

	unsigned int i;
	int sum = 0;
	int x;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}


