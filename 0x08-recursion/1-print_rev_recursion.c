#include "main.h"
/**
 *_print_rev_recursion - function to print string in reverse
 *@s: string input
 *Return: void so no return
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}

