#include "main.h"

/**
 * _isdigit - is digit
 * @c: chracter
 * Return: 1 if true else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
