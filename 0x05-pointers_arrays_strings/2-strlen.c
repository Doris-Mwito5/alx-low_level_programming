#include "main.h"
/**
 * _strlen - prints the string length
 * @s: the value
 * Return: returns 0 on successful execution
 */
int _strlen(char *s)
{
	int x;


	for (x = 0; s[x] != '\0'; x++)
	{
		s++;
	}
	return (x);
}
