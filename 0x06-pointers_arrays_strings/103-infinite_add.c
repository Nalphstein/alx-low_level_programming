#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: string with number 1
 * @n2: string with number 2
 * @r: buffer for new string of sum of n1 and n2
 * @size_r: size of a buffer
 *
 * Return: pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1, l2, j;
	int carry;

	l1 = _strlen(n1);
	l2 = _strlen(n2);
	if (l1 > size_r - 1 || l2 > size_r - 1)
		return (0);
	carry = 0;
	j = 0;
	l1--;
	l2--;
	while (l1 >= 0 || l2 >= 0)
	{
		carry = _carry(l1, l2, n1, n2, r, j, carry);
		l1--;
		l2--;
		j++;
	}
	if (carry == 1)
	{
		r[j] = carry + '0';
		r[j + 1] = '\0';
		if (_strlen(r) + 1 > size_r) /* _strlen(r) + '\0' */
			return (0);
	}
	else
		r[j] = '\0';
	rev_string(r);
	return (r);
}
