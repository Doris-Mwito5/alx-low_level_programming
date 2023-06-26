#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: integers
 * @n: array elements
 * Return: returns 0 on successful execution
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
