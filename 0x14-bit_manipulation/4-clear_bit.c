#include "main.h"

/**
 * clear_bit - a function that sets the value
 * @n: the pointer
 * @index: the bit
 * Return: returns 1 on succesful execution
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
