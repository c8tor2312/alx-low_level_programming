#include "main.h"

/**
 * print_line - print n lines
 * @n: number of lines
 * Return: void
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
