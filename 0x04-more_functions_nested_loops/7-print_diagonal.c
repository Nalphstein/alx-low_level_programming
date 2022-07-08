#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: takes in an integer
 */

void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
			putchar(' ');
		putchar(92);
		putchar('\n');
		}
	}
}
