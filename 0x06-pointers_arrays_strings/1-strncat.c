#include "main.h"

/**
 * _strncat - concatenate n strings to destination
 * @dest: destination
 * @src: source
 * @n: number of characters to concatenate
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;
	int j;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	i = 0;
	j = dest_len;
	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
