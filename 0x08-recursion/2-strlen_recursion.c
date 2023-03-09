#include "main.h"
/**
 * _strlen_recursion(char *s) - returns the legnth of a string.
 * @a:string to return
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
