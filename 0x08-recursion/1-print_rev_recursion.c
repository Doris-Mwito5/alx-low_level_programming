#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string
 * Return: returns 0 on succesful execution
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
