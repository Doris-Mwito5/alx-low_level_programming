#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s: input value
 * Return: returns 0 on succesful execution
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
