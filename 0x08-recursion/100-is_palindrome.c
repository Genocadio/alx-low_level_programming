#include "main.h"
/**
 * is_palindrome - function that checks if string is a paalindrome
 * @s: string to be checked
 * @i: number of recursions
 * @leng: lenth of string
 * Return: 1 if string is a palindrome or else 0
 */
int palind(char *s, int i, int leng);
int strleng(char *s);
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palind(s, 0, strleng(s)));
}
/**
 * strleng - returns the length of a string
 * @s: charcter to check
 * Return: length of the string
 */
int strleng(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strleng(s + 1));
}
/**
 * palind - checks the characters recursively for palindrome
 * @i: number of recursion
 * @leng: length of the string
 * @s: charcter to be checked
 * Return: 1 if string is palindrome, else return 0
 */
int palind(char *s, int i, int leng)
{
	if (*(s + i) != *(s + leng - 1))
		return (0);
	if (i >= leng)
		return (1);
	return (palind(s, i + 1, leng - 1));
}
