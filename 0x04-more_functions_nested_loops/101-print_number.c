#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)

	{
		n *= -1;
		k = n;
		_putchar('-');
	}

	k /= 10;
	if (k != 0)
		print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
