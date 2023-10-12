#include <stdio.h>

/**
 * main - print 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%i", i);
		i++;
	}
	putchar('\n');
	return (0);
}
