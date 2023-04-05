#include "main.h"
/**
 * _strlen_recursion - function to print length of string
 * @s: string to be counted
 * @i: length of string
 * Return: i the length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	i = 1 + _strlen_recursion(s + 1);
	return (i);
}
