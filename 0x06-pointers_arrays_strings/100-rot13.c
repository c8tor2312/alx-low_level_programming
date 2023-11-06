#include "main.h"

/**
 * rot13 - rotate alphabetic char by 13
 * @s: the string to rotate
 * Return: char
 */
char *rot13(char *s)
{
	int i, j;

	char t[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char v[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == t[j])
			{
				s[i] = v[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
