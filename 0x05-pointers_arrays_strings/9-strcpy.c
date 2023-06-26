#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: character value 1
 * @src: character value 2
 * Return: returns 0 on successful execution
 */
char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}
