#include "main.h"

/**
 * _puts - print a string in a new line
 * @str: string array
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
