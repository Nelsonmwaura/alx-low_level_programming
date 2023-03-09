#include "main.h"
/**
 * _strlen_recursion - returns the legnth of a string.
 * @a:string to return
 * Return: length of string
 */
int _strlen_recursion(char *a)
{
	int len = 0;

	if (*a)
	{
		len++;
		len = len + _strlen_recursion(a + 1);
	}
	return (len);
}
