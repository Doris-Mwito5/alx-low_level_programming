#include "main.h"
/**
* print_most_numbers - prints the numbers between 0 andd 9
* A program to output numbers between 0 and 9 except 2 and 4
* Return: returns all numbers between 0 and 9
*/
void print_most_numbers(void);
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
