#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 ata agiven index
 * @index: - this is the index of the bit you want to set starting from 0
 * @n:pointer to the number to change
 * Return: returns 1 if success or -1 when it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
