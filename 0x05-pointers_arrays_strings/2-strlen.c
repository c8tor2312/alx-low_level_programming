#include "main.h"

/**
 * _strlen - return length of string
 * @s: pointer to the address of the first character of string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
