#include "main.h"

/**
 * set_bit - a function to  sets a bit at a given index
 * @n: the pointer
 * @index: the counts
 * Return: returns 0 on succesful execution
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
