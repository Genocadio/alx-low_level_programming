#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - function
 * @s: charcter
 * Return: integer value
 */
int _atoi(char *s)
{
	int sign = 1, i = 0, num = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
	{
			num = num * 10 + (s[i] - '0');
	}
		else
	{
			break;
	}
		i++;
	}

		return (sign * num);
	}

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
		printf("error\n");
		return (1);
	}
	
	
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	j = num1 * num2;
	printf("%d\n", j);
	
	return (0);
	}

