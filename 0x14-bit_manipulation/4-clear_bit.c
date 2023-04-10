#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *clear_bit -sets the value of a bit to 0 ata agiven index
 *@index: index of the bit to be set starting fron 0
 *@n: pointer to the number to be changed
 *Return: return 1 if success and -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if  (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
