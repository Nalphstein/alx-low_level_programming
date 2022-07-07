#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal
 * @n: Integer amount of _
 */

void print_line(int n)
{
	char c;

	c = 0;

	while (c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
