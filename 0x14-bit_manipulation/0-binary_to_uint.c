#include <stdio>
#include <stdlib>

/**
 * conversion - a function to convert
 * @str: the string
 *
 * Return: returns 0 on succesful execution
 */

unsigned int conversion(const char *str)
{
	unsigned int a;
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '1')
			a = (a << 1) | 1;
		else if (str[i] == '0')
			a <<= 1;
		else if (str[i] != '0' && str[i] != '1')
			return (0);
	}

	return (a);
}
