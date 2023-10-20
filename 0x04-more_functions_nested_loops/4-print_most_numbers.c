#include "main.h"

/**
 * print_most_numbers - print numbers except 2,4
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	i = '0';
	while ((i >= '0') && (i <= '9'))
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
