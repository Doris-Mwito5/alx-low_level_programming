#include "main.h"
/**
 * print_line - draws a straight line
 *@n: number of lines
 * Return: returns a straight line
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; a < n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
