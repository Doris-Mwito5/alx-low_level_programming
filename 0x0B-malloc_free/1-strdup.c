#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char value
 * Return: returns 0 on succesful execution
 */
char *_strdup(char *str)
{
	char *aaa;
	int m, n = 0;

	if (str == NULL)
		return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;

	aaa = malloc(sizeof(char) * (m + 1));

	if (aaa == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		aaa[n] = str[n];

	return (aaa);
}
