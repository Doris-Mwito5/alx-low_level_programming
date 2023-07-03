#include "main.h"
/**
 * _strstr - locates a substring
 * @needle: first occurrence of the substring
 * @haystack: the string
 * Return: returns a pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int m;
	int n = 0;

	while (needle[n] != '\0')
		n++;

	while (*haystack)
	{
		for (m = 0; needle[m]; m++)
		{
			if (haystack[i] != needle[m])
				break;
		}
		if (m != n)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
