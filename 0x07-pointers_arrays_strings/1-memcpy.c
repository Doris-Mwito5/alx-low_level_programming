#include "main.c"
/**
 * _memcpy - function that copies memory area
 * @dest: Memory to to copy to
 * @n: bytes
 * @src: memory address
 * Return: returns 0 on successful execution
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		dest[m] = src[m];

	return (dest);
}
