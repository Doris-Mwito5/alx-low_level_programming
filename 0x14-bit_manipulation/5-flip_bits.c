#include "main.h"

/**
 * flip_bits - a function that counts the number of bits to change
 * @n: num1
 * @m: num2
 * Return: returns 0 on succesful execution
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
