#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination
 * @src: source
 * Return: pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	k = 0;
	while (k <= j)
	{
		dest[i + 1] = src[k];
		k++;
	}
	return (dest);
}
