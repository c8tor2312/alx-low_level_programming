#include "main.h"

/**
 * print_alphabet - print lowercase alphbet then newline
 * Return: void
 */
void print_alphabet(void)
{
	char l;

	l = 'a';
	while (l >= 'a' && l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
