#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function to print strings
 * @separator: string to be printed between strings
 * @n: number of strings passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *x;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ptr, char*);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}

