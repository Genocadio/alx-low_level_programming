#include "main.h"
int main()
{
	char *arr = __FILE__;
	int i;
	for (i = 0; arr[i] != '\0'; i++)
	{
		putchar(arr[i]);
	}
	putchar('\n');
	return (0);
}
