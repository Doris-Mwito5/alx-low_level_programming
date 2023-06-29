#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: character value1
 * @src: character value2
 * @n: number of bytes to be used
 * Return: returns 0 on successful execution
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[i] = '\0';
	return (dest);
}

