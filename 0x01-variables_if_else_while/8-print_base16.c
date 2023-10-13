#include <stdio.h>

/**
 * main - print hex numbers
 *
 * Return: 0
 */
int main(void)
{
	int l = '0';

	while (l <= 'f')
	{
		putchar(l);
		if (l == '9')
			l += 40;
		else
			l++;
	}
	putchar('\n');
	return (0);
}
