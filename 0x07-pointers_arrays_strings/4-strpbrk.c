#include <stdlib.h>
#include "main.c"
/**
 * _strpbrk - srchs a string for any of a set of bytes
 * @s: the string
 * @accept: the bytes
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (NULL);
}
