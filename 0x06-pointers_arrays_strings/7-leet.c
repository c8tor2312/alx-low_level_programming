#include "main.h"

/**
 * leet - encode strings
 * @s: the given string
 * Return: char
 */
char *leet(char *s)
{
	int i, j;
	char *t;
	char *v;

	t = "aAeEoOtTlL";
	v = "4433007711";
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == t[j])
				s[i] = v[j];
			j++;
		}
		i++;
	}
	return (s);
}
