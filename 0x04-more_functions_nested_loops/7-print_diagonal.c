#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of lines
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;
	int k;

	if (n < 1)
	{
		_putchar('\n');
	}

	i = 1;
	while (i <= n)
	{
		j = i;
		k = 0;
		while (k < (j - 1))
		{
			_putchar(' ');
			k++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
