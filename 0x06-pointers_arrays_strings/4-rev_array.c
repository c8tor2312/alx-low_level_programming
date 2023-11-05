#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: length of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int j;

	j = n - 1;
	i = 0;
	while (i <= n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
		i++;
	}
}
