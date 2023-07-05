#include "main.h"
/**
  * checker - checks recursively the input from is_prime_number
  * @n: the value
  * @base: base number value
  * Return: returns 1 if n value is a prime and 0 if otherwise
  */
int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (checker(n + 1, base));
	return (1);
}
/**
  * is_prime_number - checks if the number is a prime number
  * @n: the value
  * Return: returns 1 if n value is a prime and 0 if otherwise
  */
int is_prime_number(int n)
{
	return (checker(2, n));
}
