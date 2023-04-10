#include <stdio.h>
/**
 * main - will print number of arguments passed to it
 * @argc: arguments count
 * @argv: argument vector
 * Return: 0 showing the program run well
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
