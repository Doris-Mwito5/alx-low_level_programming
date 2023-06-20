#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: character to be checked
 * Return: returns 1 for alphabet character and 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 65 && 90) || (c >= 97 && <= 122))
	{
		return (1);
	}
	return (0);
}
