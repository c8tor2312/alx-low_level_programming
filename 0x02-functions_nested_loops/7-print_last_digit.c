#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: input number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n > 0)
	{
		l = n % 10;
		_putchar('0' + l);
		return (l);
	}
	else
	{
		l = -n % 10;
		_putchar('0' + l);
		return (l);
	}
}
