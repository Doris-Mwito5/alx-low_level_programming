#include <stdio.h>
/**
*main - main function of the program
*A program to output alphabet in upper and lower case
*
*Return: returns 0 when the proram executes successfully
*/
int main(void)
{
char x;

for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
for (x = 'A'; x <= 'Z'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
