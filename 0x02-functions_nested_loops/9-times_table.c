#include "main.h"

/**
 * times_table - 9 times table
 * Return: void
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = x * y;
			if ((z / 10) == 0)
			{
				if (y > 0)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + (z / 10));
			}
			_putchar('0' + (z % 10));
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
