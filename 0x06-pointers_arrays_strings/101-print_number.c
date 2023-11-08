#include "main.h"

/**
 * print_number - print number using putchar
 * @n: the number to print
 * Return: void
 */
void print_number(int n)
{
	int i, j;
	char buffer[16];

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	i = 0;
	while (n > 0)
	{
		buffer[i] = '0' + n % 10;
		n /= 10;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
}
