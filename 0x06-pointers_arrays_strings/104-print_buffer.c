#include "main.h"
#include <stdio.h>

/**
 * _min - get minimum
 * @a: an int
 * @b: an int
 * Return: min value, a if tie
 */
/**
 * _min - get minimum
 * @a: an int
 * @b: an int
 * Return: min value, a if tie
 */
int _min(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}



char printable(char a)
{
	if (a >= ' ' && a <= '~')
		return (a);
	return ('.');
}

void print_buffer(char *b, int size)
{
	int i, j, res;

	i = 0;
	if (size <= 0)
		printf("\n");
	while (i < size)
	{
		printf("%8.8x:", i);
		res = _min(10, size - i);
		j = 0;
		while (j < res)
		{
			if (j % 2 == 0)
				printf(" ");
			printf("%02x", *(b + i + j));
			j++;
		}
		while (j < 10)
		{
			if (j % 2 == 0)
				printf(" ");
			printf("  ");
			j++;
		}
		printf(" ");
		j = 0;
		while (j < res)
		{
			printf("%c", printable(*(b + i + j)));
			j++;
		}
		printf("\n");
		i += 10;
	}
	return (res)
}
