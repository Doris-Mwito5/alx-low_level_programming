#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: value 1
 * @n: number of elements
 * Return: returns 0 on successful declaration
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d", a[x]);

		if (x == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	}
	printf("\n");
}
