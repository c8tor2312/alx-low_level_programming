#include "main.h"

/**
 * print_sign - print number sign
 * @n: number
 * Return: 1 if + 0 if 0 - if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else {
		_putchar('0');
		return (0);
	}
}
