#include "main.h"
/**
 * _islower - main function
 *@c: character to be checked
 * Return: returns 1 for lowercase amd zero for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
