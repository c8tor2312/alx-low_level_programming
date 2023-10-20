#include "main.h"

/**
 * print_triangle - print n right aligned triangle
 * @size: size of triangle
 * return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int l;

	if (size < 1)
	{
		_putchar('\n');
	}

	i = 1;
	while (i <= size)
	{
		j = i;
		k = 1;
		while (k <= (size - j))
		{
			_putchar(' ');
			k++;
		}
		l = 1;
		while (l <= j)
		{
			_putchar('#');
			l++;
		}
		_putchar('\n');
		i++;
	}
}
