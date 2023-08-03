#include "main.h"

/**
 * set_bit - a function that sets a bit
 * @n: the pointer to the number
 * @index: the bit index
 * Return: returns 1 on succesful executiion
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
