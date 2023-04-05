#include "main.h"
/*
 * factorial - function to find the factorial of number
 * @n: in put number to find the factorial
 * Return: the factorial of a number or else -1 if number is less than 0
 */
int factorial(int n)
{
	int y;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	y = n * factorial(n - 1);
	return (y);
}


