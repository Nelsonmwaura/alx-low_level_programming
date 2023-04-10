#include "main.h"
#include <unistd.h>

/**
 * _putchar - wrtes the character c to stdout
 * @c: This is the character to print
 *
 * Return: returns 1 on success
 * On error, 1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
