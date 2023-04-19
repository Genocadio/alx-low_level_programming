#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int j = 0;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	while (j < i)
	{
		if (j == i - 1)
		{
			printf("%02hhx\n", arr[j]);
			break;
		}
		printf("%02hhx ", arr[j]);
		j++;
	}
	return (0);
}
