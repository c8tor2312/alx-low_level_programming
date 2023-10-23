#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	while (0 <= j)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
