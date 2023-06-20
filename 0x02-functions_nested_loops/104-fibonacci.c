#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	int a;
	unsigned long fi1 = 0, fi2 = 1, sum;
	unsigned long fi1_ha1, fi1_ha2, fi2_ha1, fi2_ha2;
	unsigned long ha1, ha2;


	for (a = 0; a < 92; a++)
	{
		sum = fi1 + fi2;
		printf("%lu, ", sum);
		fi1 = fi2;
		fi2 = sum
	}
	fi1_ha1 = fi1 / 10000000000;
	fi2_ha1 = fi2 / 10000000000;
	fi1_ha2 = f1 % 10000000000;
	fi2_ha2 = f2 % 10000000000;
	for (a = 93; a < 99; a++)
	{
		ha1 = fi1_ha1 + fi2_ha1;
		ha2 = fi1_ha2 + fi2_ha2;
		if (fi1_ha2 + fi2_ha2 > 9999999999)
		{
			ha1 += 1;
			ha2 %= 10000000000;
		}
		printf("%lu%lu", ha1, ha2);
		if (a != 98)
			printf(", ");
		fi1_ha1 = fi2_ha1;
		fi1_ha2 = fi2_ha2;
		fi1_ha2 = ha1;
		fi2_ha2 = ha2;
	}
	print("\n");
	return (0);
}
