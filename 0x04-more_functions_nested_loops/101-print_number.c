#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)

	{
		n *= -1;
		x = n;
		_putchar('-');
	}

	x /= 10;
	if (x != 0)
		print_number(x);
	_putchar((unsigned int) n % 10 + '0');
}
