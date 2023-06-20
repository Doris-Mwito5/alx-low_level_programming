#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0 when executed successfully
 */
int main(void)
{
	int a, c;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			c += a;
	}
	printf("%d\n", c);
	return (0);
}
