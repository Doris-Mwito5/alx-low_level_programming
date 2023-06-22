#include "main.h"
/**
 * _isdigit - check if the number is (0 - 9)
 *@a: digit to be checked
 *
 * Return: 0 or 1 if the digit is 0 - 9
 */

int _isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}
