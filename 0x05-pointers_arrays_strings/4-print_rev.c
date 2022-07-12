#include "main.h"

/**
 * print_rev - print a string in reverse followed by new line
 * @s: character array string
 */
void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	for (c = c - 1; c >= 0; c--)
	{
		_putchar(c);
	}
	_putchar ('\n');
}
