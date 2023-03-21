#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line
 * @a: string to print
 */

void _puts_recursion(char *a)
{
	if (*a)
	{ _putchar(*a);
	  _puts_recursion(a + 1);
	}
	else
	{
	_putchar('\n');
	}
}
