#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * description getting a random number and printing it
 * and to check if it's postive, negative or zero
 * Return: 0 Always success
 */

int main(void)
{
	int j;
	srand(time(0));
	j = rand() - RAND_MAX / 2;
	if (j > 0)
		printf("%i is positive\n", j);
	else if (j < 0)
		printf("%i is negative\n", j);
	else
		printf("%i is zero\n", j);
	return (0);
}
