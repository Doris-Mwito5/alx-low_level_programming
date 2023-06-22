#include "main.h"
/**
  * _isupper - Check if a letter is upper
  * @a: The number to be checked
  *
  * Return: 1 for upper letter or 0 for any else
  */
int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	return (0);
}
