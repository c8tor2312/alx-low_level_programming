#include <stdio.h>

/**
 * main - print sum of multiples of 3 or 5 < 1024
 * Return: 
 */
int main(void)
{
	int x;
	int m;

	x = 1;
	m = 0;
	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			m += x;
		}
		x++;
	}
	printf("%d\n", m);
}
