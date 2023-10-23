#include "main.h"

/**
 * rev_string - reverse a given string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int a;
	int b;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	b = a - 1;
	while (b >= 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}
