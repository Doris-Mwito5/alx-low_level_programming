#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the character
 * @c: character to be printed
 *
 * Return: returns 0 on successful execution
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

