#include "main.h"
/**
 * times_table - function to print the 9 times table
 *
 * Return: returns 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');
			c = a * b;
			if (c <= 9)
				_putchar(' ');
			else
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
