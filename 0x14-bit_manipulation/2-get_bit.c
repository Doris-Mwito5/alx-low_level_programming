#include "main.h"

/**
 * get_bit - a functions returns the value of a bit
 * @n: the search iterations
 * @index: the index
 * Return: returns 0 on successful execution
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
