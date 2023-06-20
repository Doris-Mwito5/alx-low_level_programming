#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0 when executed successfully
 */
int main(void)
{
	int a;
	unsigned long f1, f2, sum;

	unsigned long f1 = 0, f2 = 1, sum;

	for (a = 0; a < 50; a++)
	{
		sum = f1 + f2;
		printf("%lu", sum);
		f1 = f2;
		f2 = sum;
		if (a == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
