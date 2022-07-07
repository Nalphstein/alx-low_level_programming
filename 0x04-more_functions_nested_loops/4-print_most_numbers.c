#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9, excluding 2 and 4.
 * Description: Can only use _putchar twice.
 */

void print_most_numbers(void)
{
	void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
