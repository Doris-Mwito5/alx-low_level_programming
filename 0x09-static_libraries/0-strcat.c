#include "main.h"
 /**
 * _strcat - concatenates two strings
 * @dest: value1
 * @src: value2
 * Return: returns 0 on succesful execution
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
