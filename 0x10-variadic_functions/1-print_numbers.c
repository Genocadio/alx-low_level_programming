#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function to print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int x;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ptr, int);
		printf("%d", x);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}

