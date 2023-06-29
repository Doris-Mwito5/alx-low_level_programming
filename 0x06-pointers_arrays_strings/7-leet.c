#include "main.h"
/**
 * leet - encode a string into 1337
 * @s: The string
 * Return: returns 0 on successful execution
 */
char *leet(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		while (s[a] == 'a' || s[a] == 'A')
			s[a] = '4';
		while (s[a] == 'e' || s[a] == 'E')
			s[a] = '3';
		while (s[a] == 'o' || s[a] == 'O')
			s[a] = '0';
		while (s[a] == 't' || s[a] == 'T')
			s[a] = '7';
		while (s[a] == 'l' || s[a] == 'L')
			s[a] = '1';
	}

	return (s);
}
