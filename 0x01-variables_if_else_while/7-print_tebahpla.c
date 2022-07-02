#include <stdio.h>

/**
 * main - main block
 * Description: Print statements based on the last digit of the random number.
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
