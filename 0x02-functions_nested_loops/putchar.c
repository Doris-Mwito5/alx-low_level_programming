#include "main.h"
#include <unistd.h>

/**
 * putchar - writes to the character c stdout
 *
 * Return: returns 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
