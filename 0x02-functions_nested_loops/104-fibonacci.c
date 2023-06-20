#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	int count;
	unsigned long fi1 = 0, fi2 = 1, sum;
	unsigned long fi1_half1, fi1_half2, fi2_half1, fi2_half2;
	unsigned long half1, half2;


	for (count = 0; count < 92; count++)
	{
		sum = fi1 + fi2;
		printf("%lu, ", sum);

		fi1 = fi2;
		fi2 = sum;
	}
	fi1_half1 = fi1 / 10000000000;
	fi2_half1 = fi2 / 10000000000;
	fi1_half2 = fi1 % 10000000000;
	fi2_half2 = fi2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fi1_half1 + fi2_half1;
		half2 = fi1_half2 + fi2_half2;
		if (fi1_half2 + fi2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");
		fi1_half1 = fi2_half1;
		fi1_half2 = fi2_half2;
		fi2_half1 = half1;
		fi2_half2 = half2;
	}
	printf("\n");
	return (0);
}
