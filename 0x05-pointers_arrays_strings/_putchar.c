#include <unistd.h>
/**
 * _putchar - prints the character to the stdout
 * @c: the character
 * Return: returns 0 on a successful execution
 * .
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
