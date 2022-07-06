#include "main.h"

/**
 * _abs - compute absolute integer value
 * @n: int type number
 * Return: absolute value @n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
