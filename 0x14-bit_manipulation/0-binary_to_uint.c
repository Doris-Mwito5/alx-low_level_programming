#include "main.h"

/**
 * conversion - a function to convert
 * @str: the string
 *
 * Return: returns 0 on succesful execution
 */

unsigned int conversion(const char *str)
{
	unsigned int a;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		a = 2 * a + (b[i] - '0');
	}

	return (a);
}
