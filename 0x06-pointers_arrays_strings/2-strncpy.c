#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: character value1
 * @src: character value2
 * @n: the number of bytes
 * Return: returns 0 on successful execution
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
