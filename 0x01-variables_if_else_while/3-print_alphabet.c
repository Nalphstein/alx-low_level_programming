#include <stdio.h>

/**
 * main - main block
 * Description: You can only use the putchar function.
 * Return: 0
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'a')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
