#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function to add digits
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 means program run well
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int num = 0;

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (arg[j] - '0');
		}

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
