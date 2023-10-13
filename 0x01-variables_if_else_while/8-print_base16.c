#include <stdio.h>

/**
 * main - print hex numbers
 *
 * Return: 0
 */
int main(void)
{
	int l = '0';

	while (l <= 'F')
	{
		putchar(l);
		if (l == '9')
			l += 8;
		else
			l++;
	}
	putchar('\n');
	return (0);
}
