#include "main.h"
/**
 * print_sign - prints the sign of anumber
 * @n: the number to be checked
 * Return: returns 1 if it's positive -1 if its negative and 0 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
