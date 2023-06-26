#include "main.h"
/**
 * _strlen - prints the string length
 * @s: the value
 * Return: returns 0 on successful execution
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
