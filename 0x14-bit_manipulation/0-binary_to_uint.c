#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * binary_to_uint - it converts a binary number to an unsigned int
 * @b: pointer to a strinof 0 and 1 chars
 * Return: returns the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int bin_num = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		bin_num = 2 * bin_num + (b[a] - '0');
	}
	return (bin_num);
}

