#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size char
 * @size:array size
 * @c: char value
 * Return: returns a pointer to the array or NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
