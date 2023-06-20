#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - makes the alphabet
 *
 * Returns: returns 0
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 'a'; x <= 'z'; x++)
	{
		for (y = 1; y <= 10; y++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}

