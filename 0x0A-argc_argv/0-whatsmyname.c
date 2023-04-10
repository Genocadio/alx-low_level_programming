#include <stdio.h>
/**
 * main - program entry point for program to print its file name
 * @i: iterator
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
