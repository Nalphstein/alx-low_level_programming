#include "main.h"

/**
* times_table - that prints the 9 times table
*
* Return: no return
*/

void times_table(void)
{
	int x;
	int a;
	int i;

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (a = 1; a <= 9; a++)
		{
			i = x * a;
			_putchar(44);
			_putchar(32);
			if (i <= 9)
			{
				_putchar(32);
				_putchar(i + 48);
			}
			else
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
