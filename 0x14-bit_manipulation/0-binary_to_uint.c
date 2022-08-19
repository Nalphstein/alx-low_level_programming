#include "main.h"

/**
 * binary_to_uint -> function that converts a binary number to an unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int n;

	if (!b)
		return (0);

	for (m = 0; b[m] != '\0'; m++)
	{
		if (b[m] != '0' && b[m] != '1')
			return (0);
	}
	for (m = 0; b[m] != '\0'; m++)
	{
		n <<= 1;
		if (b[m] == '1')
			n += 1;

	}
	return (n);
}
