#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to print
 * Return: returns 0 on succesful exdcution
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
