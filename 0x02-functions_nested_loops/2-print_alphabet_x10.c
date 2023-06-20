#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - makes the alphabet
 *
 * Returns: returns 0
 */
void print_alphabet_x10(void)
{
	char x;
	int y = 0;

	while (y <= 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		y++;
	}
}
