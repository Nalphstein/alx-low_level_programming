#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9, excluding 2 and 4.
 * Description: Can only use _putchar twice.
 */

void print_most_numbers(void)
{
	int c;

	c = 0;

	while (c < 10)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
