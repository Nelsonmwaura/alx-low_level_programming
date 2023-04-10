#include "main.h"

/**
 * get_endianness - it checks for endainness
 * Return: returns 0 for big and 1 for small
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
