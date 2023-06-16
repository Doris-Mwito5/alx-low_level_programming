#include <stdio.h>
/**
 *main - main function of the program
 *
 *Return: returns 0 when the program executes succesfully
 */
int main(void)
{
	int m, n, o;

	for (m = '0'; m < '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			for (o = n + 1; o <= '9'; o++)
			{
				if (( n != m) != o)
				{
					putchar(m
		{
			 if (( n != m) != o)
			 {
				 putchar(m);
				 purchar(n);
				 putchar(o);
				 if (m == '7' && n == '8')
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
