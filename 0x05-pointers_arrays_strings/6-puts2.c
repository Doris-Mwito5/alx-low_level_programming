#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: character value
 * Return: returns 0 on successful execution
 */
void puts2(char *str)
{
	int x = 0;
	int y = 0;
	char *a = str;
	int c;

	while (*a != '\0')
	{
		a++;
		x++
	}
	y = x = 1;
	for (c = 0; c <= y; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
