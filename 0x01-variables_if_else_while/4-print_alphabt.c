#include <stdio.h>

/**
 * main - lowercase except q, e
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a >= 'a' && a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
