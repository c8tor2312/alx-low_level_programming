#include "main.h"

/**
 * print_square - print n squares
 * @size: how many squares?
 * return: void
 */
void print_square(int size)
{
	int i;
	int j;

	if (size < 1)
	{
		_putchar('\n');
	}

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
