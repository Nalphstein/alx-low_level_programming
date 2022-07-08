#include "main.h"

/**
 * print_number - prints # using putchar functiom
 * @n: integer to use
 */

void print_number(int n)
{
	long k;
	int i; 
	long num; 

	num = n;
	
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	k = 1;
	i = 1;
	while (i)
	{
		if (num / (k * 10) > 0)
			k *= 10;
		else
			i = 0;
	}

	while (num >= 0)
	{
		if (k == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / k % 10) + '0');
			k /= 10;
		}
	}
}
