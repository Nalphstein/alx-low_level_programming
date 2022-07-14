#include "main.h"

/**
 * _strncat - Concates string and integers.
 * @dest: char string to append into
 * @src: char string
 * @n: integer type
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
