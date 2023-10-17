#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print n multiplication table
 * @n: number
 * Return: void
 */
void print_times_table(int n)
{
	int x;
	int y;
	int z;

	if (n >= 0 && n <= 15)
	{
		x = 0;
		while (x <  n)
		{
			y = 0;
			while (y <= n)
			{
				z = x * y;
				if (y > 0)
					printf("%3d", z);
				else
					printf("%d", z);
				if (y >= 0 && y < n)
					printf(", ");
				y++;
			}
			printf("\n");
			x++;
		}
	}
}
