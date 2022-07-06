#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
	int nq;

	if (n < 0)
	{
		nq = -1 * (n % 10);
		_putchar(nq + '0');
		return (nq);
	}
	else
	{
		nq = n % 10;
		_putchar(nq + '0');
		return (nq);
	}
}
