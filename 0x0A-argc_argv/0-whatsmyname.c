#include <stdio.h>
/**
 * main - program entry point for program to print its file name
 * @argc: argument count to function main
 * @argv: argument list
 * Return: 0 shows program success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
