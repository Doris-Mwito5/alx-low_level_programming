#include "main.h"
/**
 * puts_half - prints half a string
 * @str: the character value
 * Return: returns 0 on a successful execution
 */
void puts_half(char *str)
{
	int x, b, c;

	c = 0;

	if ((c % 2) == 1)
		b = ((c + 1) / 2);
	for (x = n; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
