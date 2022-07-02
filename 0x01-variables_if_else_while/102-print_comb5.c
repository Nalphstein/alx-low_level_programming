#include <stdio.h>

/**
 * main - Print numbers from 00 to 99
 *
 * Return: 0 Succcess
 */

int main(void)
{
	int i;
	int d;

	for (i = 0; i <= 9; i++)
	{
		for (d = 0; d <= 9; d++)
		{
			putchar(i + '0');
			putchar(d + '0');
			if (!(i == 9 && d == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
