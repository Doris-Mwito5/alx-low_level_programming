#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 *
 * Return: returns 0 on succesful execution
 */
int main(void)
{
	int x[100];
	int a, b, c;

	c = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)

	{
		x[a] = rand() % 78;

		c += (x[a] + '0');
		putchar(x[a] + '0');
		if ((2772 - c) - '0' < 78)
		{
			b = 2772 - c - '0';
			c += b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
