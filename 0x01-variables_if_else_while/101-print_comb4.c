#include <stdio.h>
/**
 *main - main function of the program
 *
 *Return: returns 0 when the program executes succesfully
 */
int main(void)
{
	int k, l, m;

	for (k = '0'; k < '9'; k++)
	{
		for (l = k + 1; l <= '9'; l++)
		{
			for (m = l + 1; m <= '9'; m++)
			{
			if ((l != k) != m)
			{
			putchar(k);
			putchar(l);
			putchar(m);
			if (k == '7' && l == '8')
				continue;
			putchar(',');
			putchar(' ');
			}
			}
		}

	}
	putchar('\n');
	return (0);
}
