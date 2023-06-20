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
	int a;

	if (n > 98)
		for (a = n; a > 98; a++)
		{
			printf("%d, ", a);
		}
	else
		for (a = n; a < 98; a++)
		{
			printf("%d, ", a);
		}
}
