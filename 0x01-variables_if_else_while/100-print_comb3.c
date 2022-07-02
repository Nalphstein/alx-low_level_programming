#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations of two digits
 * Return: 0
 */

int main(void)
{
	int i;
	int m;
	int j;

	i = 0;

	while (i < 100)
	{
		m = i % 10; /* singles digit */
		j = i / 10; /* doubles digit */

		if (j < m)
		{
			putchar(j + '0');
			putchar(m + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
