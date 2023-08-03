#include "main.h"

/**
 * get_endianness - a function that checks a machine
 * Return: returns 1 for small and 0 for big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
