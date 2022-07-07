#include "main.h"

/**
 * _isdigit - checks for digit through 0 to 9
 * @c: int type param
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
