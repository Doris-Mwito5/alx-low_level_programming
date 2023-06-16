#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main function of the program
 *The program print the last digit of the number stored in the variable n
 *
 * Return: returns 0 when the program executes successfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 5)
{
	printf("%d and is greater than 5", n);
}
else if (n == 0)
{
	printf("%d and is 0",  n);
}
else
{
	printf("%d and is less than 6 and not 0", n);
}
return (0);
}
