#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * @s: the string
 * Return: returns 1 if it is and 0 if otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: returns the string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: the string
 * @i: the value
 * @len: string length
 * Return: returns 1 if its palindrom and 0 if otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
