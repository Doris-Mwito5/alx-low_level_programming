#include "main.h"
/**
 * print_number - prints an int
 * @n: the int
 */
void print_number(int n);
{
	unsigned int a;

	if (n < 0)
	{
		n *= -1;
		a = n;
		_putchar('-');
	}
	a /= 10;
	if (a != 0)
		print_number(a);
	_putchar((unsigned int) n % 10 + '0');
}
