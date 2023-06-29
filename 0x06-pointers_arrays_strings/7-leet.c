#include "main.h"
/**
 * leet - encode a string into 1337
 * @n: The string
 * Return: returns 0 on successful execution
 */
char *leet(char *n)
{
	int a, b;
	char sh[] = "aAeEoOtTlL";
	char ch[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == sh[b])
			{
				n[a] = ch[b];
			}
		}
	}
	return (n);
}
