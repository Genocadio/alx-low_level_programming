#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: name to print
 * @f: function passed to print name
 * Return: voidf
 */
void print_name(char *name, void (*f)(char *))
{
	if (!(name) || !(f))
		return;
	f(name);
}
