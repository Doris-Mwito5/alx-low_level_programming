#include "main.h"
/**
 * _memset - fills a block of memory with a specific value
 * @s: base adress
 * @b: value
 * @n: bytes
 * Return: returns 0 on succesful execution
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
