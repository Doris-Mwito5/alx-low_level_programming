#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string using rot13
 * @s: pointer
 * Return: returns 0 on succesful execution
 */
char *rot13(char *s)
{
	int m;
	int n;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (s[m] == a[n])
			{
				s[m] = b[n];
				break;
			}
		}
	}
	return (s);
}
