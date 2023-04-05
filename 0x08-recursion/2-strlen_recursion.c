#include "main.h"
/**
 * _strlen_recursion - function to print length of string
 * @s: string to be counted
 * Return: i the length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i +=  _strlen_recursion(s + 1);
	}
	return (i);
}
