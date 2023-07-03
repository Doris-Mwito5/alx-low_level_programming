#include "main.c"
/**
 * _memset - fill a block of memory with a specific value
 * @s: address
 * @b: the value
 * @n: bytes number
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}

	return (s);
}
