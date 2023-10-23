#include "main.h"

/**
 * rev_string - reverse a given string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	int a;
	int b;
	int i;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	b = a - 1;
	i = 0;
	while (i < a / 2)
	{
		tmp = s[i];
		s[i] = s[b];
		s[b--] = tmp;
		i++;
	}
}
