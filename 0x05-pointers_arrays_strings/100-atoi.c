#include "main.h"
/**
 * _atoi - converts string to an integer
 * @s: the integer
 * Return: returns 0 on successful execution
 */
int _atoi(char *s)
{
	int x;
	
	int y;

	char *a;


	a = s;
	y = 0;
	x = 1;

	while (*a != '\0' && (*a < '0' || *a > '9'))
	{
		if (*a == '-')
			x *= -1;
		a++;
	}
	if (*a != '\0')
	{
		do {
			y = y * 10 + (*a - '0');
			a++;
		} while (*a >= '0' && *a <= '9');
	}

	return (y * x);
}

