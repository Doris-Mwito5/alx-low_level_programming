#include "main.h"
/**
 * swap_int - function that swaps two int values
 * @a: value 1
 * @b: value 2
 * Return: returns 0 on execution
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
