#include "main.h"
/**
 * _atoi - converts string to an integer
 * @s: the int
 * Return: returns 0 on successful execution
 */
int _atoi(char *s)
{
	int a;
	int b;
	int c;

	while (s[c] && (s[c] < '0' || s[c] > '9'))
	{
		if (s[c] == '-')
			c++;

	}
	while (s[c] && (s[c] >= '0' && <= '9'))
	{
		a = (a * 10) + (s[c] - '0');
		c++;
	}
	return (a * b);
}
