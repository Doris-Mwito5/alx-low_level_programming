#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned long fi1 = 0, fi2 = 1, fisum;
	float total_sum;


	while (1)
	{
		fisum = fi1 + fi2;
		if (fisum > 4000000)
			break;
		if ((fisum % 2) == 0)
			total_sum += fisum;
		fi1 = fi2;
		fi2 = fisum;
	}
	printf("%.0f\n", total_sum);
	return (0);
}
