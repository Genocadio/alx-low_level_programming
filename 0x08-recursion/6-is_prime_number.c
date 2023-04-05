#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}

/**
 * prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: number of recursions
 * Return: 1 if n is prime number, or else 0
 */
int prime(int n, int i)
{
	if (i >= n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime(n, i + 1));
}
