#include <stdio.h>
/**
 *main - main function of the program
 *
 *Return: returns 0 when the program executes successfully
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
