#include "main.h"

/**
 * _strcpy - copy string to another destination in memory
 * @dest: destination
 * @src: source
 * Return: destination to the new string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[++i] = '\0';
	return (dest);
}
