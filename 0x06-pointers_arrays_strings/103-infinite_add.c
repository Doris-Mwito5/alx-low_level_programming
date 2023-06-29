#include "main.h"
/**
 * infinite_add - Adds two numbers
 * @n1: int1
 * @n2: int2
 * @r: buffer
 * @size_r: The buffer size
 * Return: returns 0 on succesful execution
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int res = 0, a = 0, b = 0, ch = 0;
	int res2 = 0, res3 = 0, ch2 = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	a--;
	b--;
	if (b >= size_r || b >= size_r)
		return (0);
	while (b >= 0 || a >= 0 || res == 1)
	{
		if (a < 0)
			res2 = 0;
		else
			res2 = *(n1 + a) - '0';
		if (b < 0)
			res3 = 0;
		else
			res3 = *(n2 + b) - '0';
		ch2 = res2 + res3 + res;
		if (ch2 >= 10)
			res = 1;
		else
			res = 0;
		if (ch >= (size_r - 1))
			return (0);
		*(r + ch) = (ch2 % 10) + '0';
		ch++;
		b--;
		a--;
	}
	if (ch == size_r)
		return (0);
	*(r + ch) = '\0';
	rev_string(r);
	return (r);
}
