#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: -1, 0 or 1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1 = s1 + 1;
		s2 = s2 + 1;
	}
	return (0);
}
