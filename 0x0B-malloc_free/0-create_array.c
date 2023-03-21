#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*create_array - creates an array of chars, initializes it with a specific char
*@c: char to intialize array with
*@size: size of array to be created
*
* Return: Null if size = 0, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int p;
	char *s;

	if  (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < size; p++)
	{
		s[p] = c;
	}
	return (s);
}
