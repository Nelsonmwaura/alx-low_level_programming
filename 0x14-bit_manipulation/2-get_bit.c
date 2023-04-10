#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search
 * @index: index of a bit starting from 0
 * Return: returns value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int get_bit;

	if (index > 63)
		return (-1);
	get_bit = (n >> index) & 1;
	return (get_bit);
}
