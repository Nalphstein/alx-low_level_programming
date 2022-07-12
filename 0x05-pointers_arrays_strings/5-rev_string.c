#include "main.h"

/**
 * rev_string - reverses a string
 * @s: character array string
 */
void rev_string(char *s)
{
	int c, i, 1;
	char d;

	for (c = 0; s[c] != '\0'; c++;)
		;
	1 = c;
	for (c--; i = 0; i < 1 / 2; c--, i++)
	{
		d = s[i];
s[i] = s[c];
s[c] = d;
	}
}
