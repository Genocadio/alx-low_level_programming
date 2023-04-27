#include <stdio.h>
#include "lists.h"
/**
 * print - function to print a message
 * Return: 0 means success
 */
int print(void) __attribute__((constructor));
int print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}
