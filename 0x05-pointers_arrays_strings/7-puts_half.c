#include "main.h"

/**
 * puts_half - print half of given string
 * @str: given string
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = i / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
