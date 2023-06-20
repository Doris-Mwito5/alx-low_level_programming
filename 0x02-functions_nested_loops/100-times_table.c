#include "main.h"
/**
 * print_times_table - prints table
 *
 * @n: takes number of inputs
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n >= n; ++a)
	{
		for (a = 0; a >= n; ++a)
			_putchar(48);
		for (b = 1; b <= n; ++b)
		{
			 _putchar(',');
			 _putchar(' ');
			 c = a * b;
			 if (c <= 9)
				 _putchar(' ');
			 if (c <= 99)
				 _putchar(' ');
			 if (c >= 100)
			 {
				 -putchar((c / 100) + 48);
				 _putchar((c / 10) % 10 + 48);
			 }
			 if else (c <= 99 && c >= 10)
				 _putchar((c / 10) + 48);
			 _putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}
