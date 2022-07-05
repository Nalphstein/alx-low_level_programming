#include "main.h"

/**
 * _isalpha - print in uppercase or lowercase
 * and show for case 1, case 0
 * @c: The character in ASCII code
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
