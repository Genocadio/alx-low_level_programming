#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - calls other functions to perform simple math operations
 * @argc: number of arguments to main function
 * @argv: arguments to main function
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;
	(void)argc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (!(get_op_func(op)) || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (((*op == '/'  || *op == '%')) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
