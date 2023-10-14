#include <stdio.h>

/**
 * main - print two digit combination
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			if (y > x)
			{
				putchar('0' + x);
				putchar('0' + y);

				if (x < 8 || y < 9)
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
