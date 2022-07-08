#include "main.h"

/**
 * print_number - prints # using putchar functiom
 * @n: integer to use
 */

void print_number(int n)
{
	int divide, nth, size = 1, power = n % 10;

	n /= 10;
	divide = n;
	if (power < 0)
	{
		power *= -1, divide *= -1, n *= -1;
		_putchar('-');
	}
	if (divide > 0)
	{
		while (divide / 10 != 0)
		{
			divide /= 10, size *= 10;
		}
		while (size > 0)
		{
			nth = n / size;
			_putchar('0' + nth);
			n -= nth * size;
			size /= 10;
		}
	}
	_putchar('0' + power);
}
