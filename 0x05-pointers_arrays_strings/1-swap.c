#include "main.h"

/**
 * swap_int - swap the value of two parameters
 * @a: first paramter
 * @b: second paramter
 * return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
