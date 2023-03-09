#include "main.h"
/**
 *  _print_rev_recursion - prints a string.
 *  @a: string to print
 */

void _print_rev_recursion(char *a)
{
	if (*a)
	{
		_print_rev_recursion(a + 1);
		_putchar(*a);
	}
}
