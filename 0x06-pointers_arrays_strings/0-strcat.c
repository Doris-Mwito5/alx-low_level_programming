#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: character value1
 * @src: character value2
 * Return: returns 0 on successful execution
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}

