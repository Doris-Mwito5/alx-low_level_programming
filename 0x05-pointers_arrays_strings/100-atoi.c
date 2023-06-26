#include "main.h"
/**
 * _atoi - converts string to an integer
 * @s: the integer
 * Return: returns 0 on successful execution
 */
int _atoi(char *s)
{
	int a;
	int b;
	char *c;

	c = s;
	b = 0;
	a = 1;
	while (*c != '\0' && (*c < '0' || *c > '9'))
	{
		if (*c == '-')
			a *= -1;
		c++;
	}
	if (*c != '\0')
	{
		do {
			b = b * 10 + (*c - '0');
			c++;
		} while (*c >= '0' && *c <= '9');
	}
	return (b * a);
}
