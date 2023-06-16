#include <stdio.h>
/**
 *main - main function of the program
 *A program that prints alphabets in upper and lower case
 *
 * Return: returns zero when a program executes successfully
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
