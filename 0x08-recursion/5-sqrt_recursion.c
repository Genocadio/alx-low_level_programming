#include "main.h"

/**
 * sqrot - undergo recursions to find the square root
 * @n: number to calculate the square root of
 * @i: number of recursions
 *
 * Return: the resulting square root
 */

int sqrot(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrot(n, 0));
}

/**
 * sqrot - undergo recursions to find the square root
 * @n: number to calculate the square root of
 * @i: number of recursions
 *
 * Return: the resulting square root
 */

int sqrot(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrot(n, i + 1));
}

