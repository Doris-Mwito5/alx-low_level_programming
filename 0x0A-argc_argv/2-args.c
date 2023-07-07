#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments a program gets
 * @argc: arguments
 * @argv: array
 * Return: returns 0 on succesful execution
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
