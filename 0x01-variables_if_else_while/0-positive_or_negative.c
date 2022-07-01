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
	
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
