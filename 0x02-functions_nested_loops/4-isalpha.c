#include "main.h"

/**
 * _isalpha - is alphabetic character
 * @c: character
 * Return: 1 if true else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
