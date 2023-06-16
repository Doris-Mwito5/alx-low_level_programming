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
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
if (ld > 5)
{
	printf("The last digit of %d is %d and is greater than 5\n", n, ld);
}
else if (ld == 0)
{
	printf("The last didgit of %d is %d and is 0\n", n, ld);
}
else
{
	printf("The last digit of %d is %d and is less than 6 and not 0\n", n, ld);
}
return (0);
}
