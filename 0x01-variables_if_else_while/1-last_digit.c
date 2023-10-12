#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - n last digit
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int nth;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nth = n % 10;

	if (nth == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, nth);
	}
	else if (nth < 6)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, nth);
	}
	else
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, nth);
	}
	return (0);
}
