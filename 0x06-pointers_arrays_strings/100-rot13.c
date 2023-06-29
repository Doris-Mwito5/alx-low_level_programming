#include "main.h"
#include <stdio.h>
/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: The string
 * Return: returns 0 on successful execution
 */
char *rot13(char *s)
{
	int a;
	char ctr[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char ch[] = "nopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		if ((s[a] > 64 && s[a] < 91) || (s[a] > 96 && s[a] < 123))
		{
			s[a] = (s[a] - 65 > 25) ?
				ctr[s[a] - 97] : ch[s[a] - 65];
		}
	}
	return (s);
}
