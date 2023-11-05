#include "main.h"
#include <stdio.h>

/**
 * string_toupper - conver lowercase strings to uppercase
 * @s: string to convert
 * Return: char
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
