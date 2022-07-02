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
			putchar(tens + '0');
			putchar(ones + '0');
			if (!(tens == 9 && ones == 9)
					{
					putchar(',');
					putchar(' ');
					}
		}
	}
	putchar('\n');
	return (0);
}
