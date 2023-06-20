#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * Return: returns 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
