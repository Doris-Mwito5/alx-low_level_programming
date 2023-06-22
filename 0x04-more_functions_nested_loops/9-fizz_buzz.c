#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * Return: returns 0 forsuccessful execution
 */
int main(void)
{
	int a;


	for (a = 1; a <= 100; a++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			 printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			 printf("%d", a);
		}
		else
		{
			 printf("%d", a);
		}
	}
	printf("\n");
	return (0);
}
