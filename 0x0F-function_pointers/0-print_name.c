#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: name to print
 * @f: function passed to print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
