#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: buffer size
 * Return: returns 0 on successful execution
 */

void print_buffer(char *b, int size)
{
	int y, n, m;

	y = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (y < size)
	{
		n = size - y < 10 ? size - y : 10;
		printf("%08x: ", y);
		for (m = 0; m < 10; m++)
		{
			if (m < n)
				printf("%02x", *(b + y + m));
			else
				printf("  ");
			if (m % 2)
			{
				printf(" ");
			}
		}
		for (m = 0; m < n; m++)
		{
			int c = *(b + y + m);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		y += 10;
	}
}
