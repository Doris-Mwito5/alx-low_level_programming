#include "main.c"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: value1
 * @size: value2
 * Return: returns 0 on successful excution
 */
void print_diagsums(int *a, int size)
{
	int m, n, i;

	m = 0;
	n = 0;

	for (i = 0; i < size; i++)
	{
		m = m + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		n += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", m, n);
}
