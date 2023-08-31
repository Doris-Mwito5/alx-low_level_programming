#include "main.h"

/**
 * clear_bit - a function that sets the value of a given bit
 * @n: the pointer
 * @index: the couner
 * Return: returns 0 on succesful execution
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
