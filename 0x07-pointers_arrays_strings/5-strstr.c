#include "main.h"
/**
 * _strstr - locates a substring
 * @needle: first occurrence of the substring
 * @haystack: the string
 * Return: returns a pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (*haystack != '\0'; haystack++)
	{
		char *b = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}
