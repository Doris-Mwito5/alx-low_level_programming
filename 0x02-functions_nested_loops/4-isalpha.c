#include "main.h"
/**
 *  _isalpha - checks if its a character
 *  @c:character to be checked
 *  Return: returns 1 if the character is an alphabet and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
