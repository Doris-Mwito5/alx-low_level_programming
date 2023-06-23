#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 *for the  multiples of three it  prints Fizz instead of the number
 * and for the multiples of five it prints Buzz, for numbers of 5 and
 * 3,prints FizzBuzz
 * Return: returns 0 for (Success)
 */
int main(void)
{
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{

			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}

