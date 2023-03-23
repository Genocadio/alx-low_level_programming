#include "main.h"
/**
* _isupper - function to check if c is upper case
* @c: charcter to be checked
* Return: 1 the charcter is upper case 0 the character is in lower case
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}

