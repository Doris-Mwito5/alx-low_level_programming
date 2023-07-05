#include "main.h"
/**
 * checker - checks the input number from n to the base
 * @n: the value
 * @base: base number value
 * Return: returns the natural square root
 */
int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: the value
 * Return: returns the natural square root
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
