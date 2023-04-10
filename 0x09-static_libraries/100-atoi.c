#include "main.h"
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


