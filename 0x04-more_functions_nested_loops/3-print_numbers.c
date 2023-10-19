#include "main.h"

/**
 * print_numbers - print 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	char n;

	n = '0';
	while (n >= '0' && n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
