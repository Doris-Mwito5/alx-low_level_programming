#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that prints each array elem on a newl
 * @array: array.
 * @size: total no of elements
 * @action: pointer to print in regular or hex.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
