#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array
 * @n: Array elememnts
 * Return: returns 0 on succesful execution
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
