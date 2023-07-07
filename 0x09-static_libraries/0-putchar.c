#include <unistd.h>
/**
 * _putchar - prints the character
 * @c: The character
 * Return: returns 0 on succesul executiion
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
