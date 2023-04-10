#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point for program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 shows program run well
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int j;

	if (argc < 3 || argc > 3)
	{
		printf("error");
		return (1);
	}
	else
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	j = num1 * num2;
	printf("%d\n", j);
	}
	return (0);
}

