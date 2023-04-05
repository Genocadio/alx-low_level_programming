#include "main.h"
/**
 * factorial - function to find factorial of a number
 * @n: number to find factorial
 * Return: the factorial of postive number or -1 if number is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	return (n * factorial(n - 1));
}


