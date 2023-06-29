#include "main.h"
/**
 * _strcmp -  Reverses the content of an array of integers
 * @s1: character value1
 * @s2: character value2
 * Return: returns 0 on successful execution
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
