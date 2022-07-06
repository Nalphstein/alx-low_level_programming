#include "main.h"

/**
 * print_sign - Print the sign of a number.
 * @n: type int integer, can be negative or positive
 * Return: either 1 if +, -1 if - or 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
	return (0);
}
