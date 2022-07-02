#include <stdio.h>

/**
 * main - Write a program that prints all possible,
 * different combinations of three digits.
 * Return: 0 Success
 */

int main(void)
{
	int i;
	int m;
	int j;
	int k;

	for (i = 0; i < 1000; i++)
	{
		m = i / 100; /* hundreds */
		j = (i / 10) % 10; /* tens */
		k = i % 10; /* singles */

		if (m < j && j < k)
		{
			putchar(m + '0');
			putchar(j + '0');
			putchar(k + '0');

		if (i < 700)
		{
			putchar(44);
			putchar(32);
		}
		}
	}
	putchar('\n');

	return (0);
}
