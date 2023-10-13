#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char a = 'z';

	while (a <= 'z' && a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
