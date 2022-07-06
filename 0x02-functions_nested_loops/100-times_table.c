#include "main.h"

/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */

void print_times_table(int n)
{
	int x = 0, i, a;

	if (n > 15 || n < 0)
		return;
	while (x <= n)
	{
		for (i = 0; i <= n; i++)
		{
			a = x * i;
			if (a > 99)
			{
				_putchar(a / 100 + '0');
				_putchar((a / 10 % 10) + '0');
				_putchar(a % 10 + '0');
			}
			else if (a > 9)
			{
				_putchar(' ');
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
			else if (i != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			}
			else
				_putchar(a + '0');

			if (i != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
	}
}
