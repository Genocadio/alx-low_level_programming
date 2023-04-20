#include "3-calc.h"
/**
 * op_add - function that adds two integers
 * @a: integer to be added
 * @b: integer to be added
 * Return: the sum of two intgers
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - functio that substructs two integers
 * @a: first int
 * @b: second int
 * Return: differance of the integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to multiplier two integers
 * @a: first integer
 * @b: second integer
 * Return: product of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divides two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function to give reminder of division
 * @a: first integer
 * @b: second integer
 * Return: the modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}

