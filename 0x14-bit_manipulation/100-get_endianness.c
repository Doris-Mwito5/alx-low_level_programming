#include "main.h"

/**
 * get_endianness - a function that checks a machine
 * Return: returns 0 on succesful execution
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
