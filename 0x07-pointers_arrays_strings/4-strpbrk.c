#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: a string
 * Return: returns a pointer to the byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
		int m;

		while (*s)
		{
			for (m = 0; accept[m]; m++)
			{
			if (*s == accept[m])
			return (s);
			}
		s++;
		}

	return (NULL);
}


