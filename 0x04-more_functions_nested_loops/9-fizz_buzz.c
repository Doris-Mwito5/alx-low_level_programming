#include "main.h"
#include <stdioh>
/**
 * main - main program
 *
 * Return: return 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (a != 100)
		{
			printf(" ");
		}
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

