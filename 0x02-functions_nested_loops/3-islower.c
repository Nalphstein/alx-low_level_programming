#include "main.h"

/**
 *  _islower - Shows 1 if the input is a lowercase character,0 if not.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */

int _islower(int c)
{
	if (c >= 97 && <= 122)
		return (1);
	else
		return (0);
}
