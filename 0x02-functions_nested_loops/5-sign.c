#include "main.h"
/**
 * print_sign - prints the sign number
 * @n: the number
 * Return: returns 1 for +ve number , -1 for -ve numbers and 0 for the rest
 */
int print_sign(int n);
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
