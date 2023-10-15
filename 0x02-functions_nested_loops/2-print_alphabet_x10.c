#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabets 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	char l;

	n = 0;
	while (n < 10)
	{
		l = 'a';
		while (l >= 'a' && l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		n++;
	}
}
