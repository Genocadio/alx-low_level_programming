#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: type of argument passed to function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *str = format;
	char c;
	int i;
	double f;
	char *s;

	va_start(args, format);

	while (str && *str)
	{
		switch (*str++)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			default:
				continue;
		}
		if (*str)
			printf(", ");
	}
	va_end(args);
	printf("\n");
}

