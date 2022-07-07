#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Description: you can use _putchar twice
 */

void print_numbers(void)
{
	int x;

	x = 0;

	while (x < 10)
	{
		_putchar(x + 48);
		x++;
	}
	_putchar('\n')
}
