#include "main.h"
/**
 *_isdigit - checks is c is a digit
 *@c: char to be checked
 *Return: it will return 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
