#include <stdio.h>
/**
 * main - main function of the program
 * The program prints all aphabets except e aand q
 *
 *Return: returns 0 when the program executes successfully
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
