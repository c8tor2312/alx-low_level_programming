#include <stdio.h>

/**
 * main - three digit combination
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (j > i)
			{
				k = 0;
				while (k < 10)
				{
					if (k > j)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar('0' + k);

						if (i != 7 || j != 8 || k != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
					k++;
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
