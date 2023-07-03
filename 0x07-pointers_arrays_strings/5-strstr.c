#include <stdlib.h>
#include "main.c"
/**
* _strstr - locates a substring
* @haystack: the string
* @needle: the substring
* Return: a pointer to the beginning
*/

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b = 0;

	while (needle[b] != '\0')
		b++;

	while (*haystack)
	{
		for (a = 0; needle[i]; a++)
		{
			if (haystack[a] != needle[a])
				break;
		}
		if (a != b)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
