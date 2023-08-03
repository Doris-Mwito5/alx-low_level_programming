#include "main.h"

/**
 * get_bit - a function that returns the value of a bit
 * @n: the search times
 * @index: the bit index
 * Return: returns the value of the bit on succesful execution
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
