#include "main.h"
/**
 * rev_string - reverses the string
 * @s: the character value
 * Return: returns 0 on successful execution
 */
void rev_string(char *s)
{
	char a = s[0];
	int x = 0;
	int b;

	while (s[x] != '\0')
		x++;
	for (b = 0; b < x; b++)
	{
		x--;
		a = s[b];
		s[b] = s[x];
		s[x] = a;
	}
}
