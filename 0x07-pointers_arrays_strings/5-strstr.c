#include "main.h"
/**
 * _strstr - locates a substring
 * @needle: first occurrence of the substring
 * @haystack: the string
 * Return: returns a pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b = 0;

	while (needle[s] != '\0')
		b++;

	while (*haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (haystack[a] != needle[b])
				break;
		}
		if (a != b)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
