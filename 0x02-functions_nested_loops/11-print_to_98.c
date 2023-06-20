#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -prints natural numbers
 * @n: starting in
 *
 * Return: returns the numbers
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n < 98)
			_putchar("%d", n--);
		_putchar("%d\n", n);
	}
	else
	{
		while (n < 98)
			_putchar("%d", n++);
		_putchar("%d\n", n);
	}
}
