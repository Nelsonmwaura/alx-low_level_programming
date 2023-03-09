#include "main.h"

/**
 * factorial - Returns the factorial of a  given number.
 * @n: number to return the factorial
 *
 * Return: If n < 0 - the function should return -1 to indicate an error.
 *         If n > 0 - the fuction to return the factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
