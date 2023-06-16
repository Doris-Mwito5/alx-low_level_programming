#include <stdio.h>
/**
 *main - main function of the program
 *
 *Return: returns 0 when the program executes successfully
 */
int main(void)
{
	int x;
	char y;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
