#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -prints natural numbers
 * @n: starting in
 *
 * Return: returns the numbers
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n--);
	}
	while (n >= 98)
	{
		printf("%d", n++);
	}
}
