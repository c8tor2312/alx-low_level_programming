#include <stdio.h>

/**
 * main - print lowercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	char a;
	a = 'a';

	while (a >= 'a' && a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
