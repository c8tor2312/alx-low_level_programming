#include "main.h"

/**
 * more_numbers - print from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int n;

	i = 0;
	while (i < 10)
	{
		n = 0;
		while (n < 15)
		{
			if (n > 9)
				_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			n++;
		}
		_putchar('\n');
		i++;
	}
}
