#include "main.h"

/**
 * print_number - print number using putchar
 * @n: the number to print
 * Return: void
 */
void print_number(int n)
{
	char d[10];
	int x;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	x = 0;
	while (n > 0)
	{
		d[x] = (n % 10) + '0';
		n = n / 10;
		x++;
	}
	x = x - 1;
	while (x >= 0)
	{
		_putchar(d[x]);
		x--;
	}
}
