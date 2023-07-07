#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: the character value
 * Return: returns 0 on successful execution
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
