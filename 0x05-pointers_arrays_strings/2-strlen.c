#include "main.h"
/**
* _strlen - returns the length of a string
* @s: string to check
* Return: int length of a string
*/

int _strlen(char *s)
{
int len = 0;

while (s[len])
	len++;
return (len);
}
