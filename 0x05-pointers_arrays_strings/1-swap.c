#include "main.h"

/**
 * swap_int - swap the value of two int
 * @a: int 1
 * @b: int 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
