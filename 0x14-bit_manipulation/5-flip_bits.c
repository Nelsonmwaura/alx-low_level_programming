#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - counts the number of bits to be flipped
 * @n: the first number of bits to change
 * @m: the second number of bits to change
 * Return:returns the  number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count  = 0;
	unsigned long int new;
	unsigned long int next = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		new = next >> a;
		if (new & 1)
			count++;
	}
	return (count);
}
