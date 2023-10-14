#include <stdio.h>

/**
 * main - print different combination of two two digits
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	x = 0;
	while (x < 100)
	{
		y = 0;
		while (y < 100)
		{
			if (x < y)
			{
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar(' ');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
