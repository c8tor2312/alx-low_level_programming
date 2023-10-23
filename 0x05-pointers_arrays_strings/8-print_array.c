#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of a given array
 * @a: given array
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
